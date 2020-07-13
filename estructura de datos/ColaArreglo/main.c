#include "colarreglo.h"
int main(void){
	struct Cola *micola=NULL;
	micola=crear(micola);
	if(micola==NULL){
		printf("no hay memoria");
		return -1;
	}
	
	micola=insertar(micola,20);
	micola=insertar(micola,25);
	micola=insertar(micola,30);
	mostrar(micola);
	printf("\n");
	micola=atender(micola);
	mostrar(micola);
	
	return 0;
}
