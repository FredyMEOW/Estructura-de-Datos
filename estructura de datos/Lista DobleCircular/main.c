#include "listadoblecircular.h"
int main(void){
	struct DobleCircular *milista=NULL;
	milista=crear(1);
	milista=insertar(milista,2);
	milista=insertar(milista,3);
	
	mostrar(milista);
	milista=eliminar(milista,1);
	mostrar(milista);
	
	
	return 0;
}
