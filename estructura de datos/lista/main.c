#include "lista.h"
int main (void){
        struct Lista *milista=crear(10);
        if(milista==NULL){
            printf("No se pudo crear por falta de memoria\n");
            return -1;
        }

        milista=insertar(milista,12);
        milista=insertar(milista,20);
        milista=insertar(milista,2);
	milista=eliminar(milista);
        milista=eliminarpos(milista);
        

        mostrar(milista);
        
    

        return 0;
    }
