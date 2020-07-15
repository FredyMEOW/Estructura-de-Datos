#ifndef __Cola_Prioridad_H__
#define __Cola_Prioridad_H__

#include <stdio.h>
#include <stdlib.h>

        
	 typedef struct ColaPrioridad{
		   int elementos[100];
		   int frente;
		   int detras;
		}ColaPrioridad;

void crear(ColaPrioridad *);
void encolar(ColaPrioridad *,int ,int);
void desencolar(ColaPrioridad *);
void mostrar(ColaPrioridad *);

#endif
