#include <stdio.h>
#include <stdlib.h>



struct Pilaarreglo{
	
	int * arreglo;
	int tope;
	int capacidad;
};

struct Pilaarreglo * crear(int );
int push(struct Pilaarreglo* , int );
int pop(struct Pilaarreglo* );
void mostrar(struct Pilaarreglo*);

