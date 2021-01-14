//main.h

#pragma once

#include <stdio.h>
#include <conio.h>

#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable : 4996)

#define Z 2

#define SQR(x) (x)*(x) 

#define MAX(y,z) ((y)>(z))?(y):(z)

#define MIN(y,z) ((y)<(z))?(y):(z)

#define MODUL(x) ((x)>0)?(x):(-x)

#define PRINTI(w) puts("control output"); \
 printf(#w"=%d\n",w)

#define PRINTR(w) puts ("rezult :"); \
 printf (#w"=%f\n",(float)w)
