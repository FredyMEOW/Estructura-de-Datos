#include "listacircular.h"
int main(void){
	struct Circular *milista=NULL;
	milista=crear(1);
	milista=insertar(milista,2);
	milista=insertar(milista,3);
	milista=insertar(milista,4);

	mostrar(milista);
	milista=eliminar(milista,4);
	mostrar(milista);


	return 0;
}
