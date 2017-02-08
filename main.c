/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfremeau <qfremeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 21:40:50 by qfremeau          #+#    #+#             */
/*   Updated: 2017/02/08 17:18:44 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"
#define min(a,b) (((a) < (b)) ? (a) : (b))

int intersectRaySphere(t_ray *r, t_sphere *s, float *t)
{
	int	retval;
	double A;
	double B;
	double C;
	float discr;
	t_vec3 dist;

	retval = 1;
	A = v3_dot_double(&r->dir, &r->dir); 
	dist = v3_sub_vec_(r->start, s->pos);
	B = 2 * v3_dot_double(&r->dir, &dist);
	C = v3_dot_double(&dist, &dist) - (s->radius * s->radius);
	discr = B * B - 4 * A * C;
	if(discr < 0)
		retval = 1;
	else
	{
		float sqrtdiscr = sqrt(discr);
		float t0 = (-B + sqrtdiscr / 2);
		float t1 = (-B - sqrtdiscr / 2);

		if (t0 > t1)
			t0 = t1;
		if ((t0 > 0.001f) && (t0 < *t))
		{
			*t = t0;
			retval = 0;
		}
		else
			retval = 1;
	}
	return (retval);
}

int			main(int ac, char **av)
{
	(void)			av;
	(void)			ac;
	t_rt			*rt;
	int				p;
	SDL_Surface		*kek;
	SDL_Texture		*kekus;
	SDL_Rect		kok;
	t_sphere		spheres[3];
	t_material		materials[3];
	t_light			lights[3];
	t_ray			r;

	kernel_isopencl();
	rt = (t_rt*)malloc(sizeof(t_rt));
	rt->esdl = malloc(sizeof(t_esdl));
	p = esdl_init(rt->esdl, 800, 600, "Coucou");
	kek = esdl_create_surface(800, 600);
	esdl_clear_surface(kek, NULL, 0xFF000000, NULL);

	materials[0].diffuse.red = 1;
	materials[0].diffuse.green = 0;
	materials[0].diffuse.blue = 0;
	materials[0].reflection = 0.2;

	materials[1].diffuse.red = 0;
	materials[1].diffuse.green = 1;
	materials[1].diffuse.blue = 0;
	materials[1].reflection = 0.5;

	materials[2].diffuse.red = 0;
	materials[2].diffuse.green = 0;
	materials[2].diffuse.blue = 1;
	materials[2].reflection = 0.9;

	spheres[0].pos.x = 200;
	spheres[0].pos.y = 300;
	spheres[0].pos.z = 0;
	spheres[0].radius = 200;
	spheres[0].material = 0;

	spheres[1].pos.x = 400;
	spheres[1].pos.y = 400;
	spheres[1].pos.z = -100;
	spheres[1].radius = 100;
	spheres[1].material = 1;

	spheres[2].pos.x = 500;
	spheres[2].pos.y = 140;
	spheres[2].pos.z = 0;
	spheres[2].radius = 100;
	spheres[2].material = 2;

	lights[0].pos.x = 0;
	lights[0].pos.y = 240;
	lights[0].pos.z = -100;
	lights[0].intensity.red = 1;
	lights[0].intensity.green = 1;
	lights[0].intensity.blue = 1;

	lights[1].pos.x = 3200;
	lights[1].pos.y = 3000;
	lights[1].pos.z = -1000;
	lights[1].intensity.red = 0.6;
	lights[1].intensity.green = 0.7;
	lights[1].intensity.blue = 1;

	lights[2].pos.x = 600;
	lights[2].pos.y = 0;
	lights[2].pos.z = -100;
	lights[2].intensity.red = 0.3;
	lights[2].intensity.green = 0.5;
	lights[2].intensity.blue = 1;

	int x, y;
	for(y=0;y<600;y++){
		for(x=0;x<800;x++){

			float red = 0;
			float green = 0;
			float blue = 0;

			int level = 0;
			float coef = 1.0;

			r.start.x = x;
			r.start.y = y;
			r.start.z = -2000;

			r.dir.x = 0;
			r.dir.y = 0;
			r.dir.z = 1;

			do
			{
				/* Find closest intersection */
				float t = 20000.0f;
				int currentSphere = -1;

				unsigned int i;
				for(i = 0; i < 3; i++){
					if(intersectRaySphere(&r, &spheres[i], &t) == 0)
						currentSphere = i;
				}
				if(currentSphere == -1) break;

				t_vec3 scaled = v3_scale_vec_(r.dir, t);
				t_vec3 newStart = v3_add_vec_(r.start, scaled);

				/* Find the normal for this new vector at the point of intersection */
				t_vec3 n = v3_sub_vec_(newStart, spheres[currentSphere].pos);
				double temp = v3_dot_double(&n, &n);
				if(temp == 0) break;

				temp = 1.0f / sqrtf(temp);
				n = v3_scale_vec_(n, temp);

				/* Find the material to determine the colour */
				t_material currentMat = materials[spheres[currentSphere].material];

				/* Find the value of the light at this point */
				//unsigned int j;
				//for(j=0; j < 3; j++)
				//{
					//t_light currentLight = lights[j];
					//t_vec3 dist = v3_sub_vec_(currentLight.pos, newStart);
					//if(v3_dot_double(&n, &dist) <= 0.0f) continue;
					//float t = sqrtf(v3_dot_double(&dist,&dist));
					//if(t <= 0.0f) continue;
					//t_ray lightRay;
					//lightRay.start = newStart;
					//lightRay.dir = v3_scale_vec_(dist, (1/t));
					/* Lambert diffusion */
					//double lambert = v3_dot_double(&lightRay.dir, &n) * coef; 
					red += currentMat.diffuse.red;
					green += currentMat.diffuse.green;
					blue += currentMat.diffuse.blue;
				//}
				/* Iterate over the reflection */
				//coef *= currentMat.reflection;

				/* The reflected ray start and direction */
				//r.start = newStart;
				//double reflect = 2.0f * v3_dot_double(&r.dir, &n);
				//t_vec3 tmp = v3_scale_vec_(n, reflect);
				//r.dir = v3_sub_vec_(r.dir, tmp);

				level++;

			}
			while((coef > 0.0f) && (level < 15));
			red = min(red*255.0f, 255.0f);
			blue = min(blue*255.0f, 255.0f);
			green = min(green*255.0f, 255.0f);
			int rgb = 255;
			rgb = (rgb << 8) + blue;
			rgb = (rgb << 8) + green;
			rgb = (rgb << 8) + red;
			esdl_put_pixel(kek, x, y, rgb);
		}
	}

	kekus = SDL_CreateTextureFromSurface(rt->esdl->eng.render, kek);
	kok = (SDL_Rect){0,0,800,600};
	while (rt->esdl->run)
	{
		SDL_RenderCopy(rt->esdl->eng.render, kekus, NULL, &kok);
		esdl_update_events(rt->esdl->eng.input, &rt->esdl->run);
		//SDL_RenderClear(rt->esdl->eng.render);
		SDL_RenderPresent(rt->esdl->eng.render);
		esdl_fps_limit(rt->esdl);
		esdl_fps_counter(rt->esdl);

	}
	return (0);
}
