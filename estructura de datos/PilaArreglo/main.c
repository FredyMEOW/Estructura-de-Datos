#include <pilaarreglo.h>

int main(void){
	struct Pilaarreglo* mipila=NULL;
	
	mipila=crear(10);
	push(mipila,3);
	push(mipila,6);
	push(mipila,9);
	pop(mipila);
	mostrar(mipila);
}

