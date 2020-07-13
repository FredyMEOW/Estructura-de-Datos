#include "colaarreglo.h"

struct Cola * crear(struct Cola* nueva){
	
	
	nueva=(struct Cola *)malloc(sizeof(struct Cola));
	if(nueva==NULL){
		return NULL;
	}
	nueva->frente=-1;
	nueva->atras=-1;
	for(int i=0;i<10;i++){
		nueva->cola[i]=0;
	}
	return nueva;
}

struct Cola * insertar(struct Cola *cola,int dato){
	
	if(cola==NULL){
		return NULL;
	}
	
	if(cola->frente==-1 && cola->atras==-1){
		cola->frente=0;
		cola->cola[0]=dato;
		cola->atras=0;
		return cola;
	}
	else if(cola->atras==9){
		return cola;
		//no hay espacio
	}else{
	int aux;
	
	cola->atras=(cola->atras)+1;
	aux=(cola->atras) % 10;
	cola->cola[aux]=dato;
	return cola;
	
	
	}
}


struct Cola * atender(struct Cola *cola){
	if(cola==NULL){
		return NULL;
	}	
	if(cola->atras==-1 && cola->frente==-1){
		return cola;
	}else
	if(cola->atras==cola->frente){
		cola->atras=-1;
		cola->frente=-1;
		return cola;
	}else
	if(cola->frente==9){
		cola->frente=0;
		return cola;
	}
	else{
		cola->cola[cola->frente]=0;
		cola->frente=(cola->frente)++;
		return cola;
	}
	
	
}


void mostrar(struct Cola *cola){
	int aux1,aux2;
	aux1=cola->frente;
	aux2=cola->atras;
	
	if(cola->frente==-1 && cola->atras==-1){
		printf("No hay nada");
	}else
	if(cola->frente==9 && cola->atras==9){
		for(int i=0; i<10;i++){
		printf("%d ,",cola->cola[i]);
		}
		
	}
	
	else{while(aux1<=aux2){
	
		printf ("%d ,",cola->cola[aux1++]);
	}
	}	
}



