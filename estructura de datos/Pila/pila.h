#ifndef __pila_H__
#define __pila_H__

#include<stdio.h>
#include<stdlib.h>
struct Pila {
	int dato;
	struct Pila * abajo;
};

struct Pila * crear (int);
struct Pila * push (struct Pila *, int);
void mostrar (struct Pila *);
struct Pila * pop(struct Pila *,int);

#endif
