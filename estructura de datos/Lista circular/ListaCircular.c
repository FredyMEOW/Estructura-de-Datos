#include "listacircular.h"





struct Circular * insertar(struct Circular* lista,int dato){
	if(lista==NULL){
		return NULL;
	}
	struct Circular * aux=lista;
	while(lista->siguiente !=aux && lista->siguiente!=NULL){
		lista=lista->siguiente;

	}
	struct Circular *nuevo = crear(dato);

	lista->siguiente=nuevo;
	nuevo->siguiente=aux;

    return aux;
}

void mostrar(struct Circular * lista){
	struct Circular * aux=lista;
	do{
		printf("%d,",lista->dato);
		lista=lista->siguiente;
	}
	while(lista != aux && lista !=NULL);
	printf("\n");
}

struct Circular* eliminar(struct Circular * lista, int dato){
	struct Circular * aux=lista;

	while(lista->siguiente->dato != dato){
		lista=lista->siguiente;
	}
	struct Circular * aux2=lista->siguiente;
	if(lista->siguiente == aux){
		aux=aux->siguiente;
	}
	lista->siguiente=lista->siguiente->siguiente;
	free(aux2);

	return aux;
}

