#!/bin/sh
ldapsearch -Q "sn=*bon*" sn | grep sn: | cut -c5- | wc -l | tr -d '[:blank:]'