#ifndef __listadoble_H__
#define __listadoble_H__

#include<stdio.h>
#include<stdlib.h>
struct Doble {
	int dato;
	struct Doble * siguiente;
};

struct Doble * crear (int);
struct Doble * insertar (struct Doble *, int);
void mostrar (struct Doble *);
struct Doble * eliminar(struct Doble *,int);

#endif
