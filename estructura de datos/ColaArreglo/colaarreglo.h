#ifndef __colaarreglo_H__
#define __colaarreglo_H__

#include<stdio.h>
#include<stdlib.h>

struct Cola{
	int cola[10];
	int frente;
	int atras;
};

struct Cola * crear(struct Cola* );
struct Cola * insertar(struct Cola *,int);
struct Cola * atender(struct Cola *);
void mostrar(struct Cola *);

#endif
