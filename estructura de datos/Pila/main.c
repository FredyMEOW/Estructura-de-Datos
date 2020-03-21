#include "listadoble.h"
int main(void){
	struct Pila *mipila=NULL;
	mipila=crear(1);
	mipila=insertar(mipila,2);
	mipila=insertar(mipila,3);
	
	mostrar(mipila);
	mipila=eliminar(mipila,1);
	mostrar(mipila);
	
	
	return 0;
}
