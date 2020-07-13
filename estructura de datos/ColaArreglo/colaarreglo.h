#ifndef __colaarreglo_H__
#define __colaarreglo_H__

#include<stdio.h>
#include<stdlib.h>

struct Cola{
	int cola[10];
	int frente;
	int atras;
};

struct Cola * crear(struct Cola* nueva);
struct Cola * insertar(struct Cola *cola,int dato);
struct Cola * atender(struct Cola *cola);
void mostrar(struct Cola *cola);

#endif
