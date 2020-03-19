    #include "lista.h"
    

    struct Lista{ //cajita
        int dato;
        struct Lista *siguiente;
    };

    struct Lista * crear(int dato){
        struct Lista *nuevo=NULL;
        nuevo=(struct Lista *)malloc(sizeof(struct Lista));
        if(nuevo==NULL){
            return NULL;
        }

        nuevo->dato=dato;
        nuevo->siguiente=NULL;

        return nuevo;
    }


    struct Lista * insertar(struct Lista *lista,int dato){
       struct Lista *nueva=crear(dato);
       nueva->siguiente=lista;
       return nueva;
    }

    void mostrar(struct Lista *lista){
        while(lista!=NULL){
            printf("%d, ",lista->dato);
            lista=lista->siguiente;
        }
        printf("\n");

    }

    struct Lista * eliminar(struct Lista *lista){
        struct Lista *aux=NULL;
        aux=lista->siguiente;
        free(lista);
        return aux;


    }
    int contador(struct Lista *lista){
    	int conta=0;
    	while(lista!=NULL){
    		conta++;
    		lista=lista->siguiente;
		}
		
		return conta;
		
	}
    
    struct Lista * eliminarpos(struct Lista *lista){
    	struct Lista *aux=NULL;
    	struct Lista *aux2=NULL;
    	int conta=0,pos=0,i=1;
    	conta=contador(lista);
    	aux=lista->siguiente;
    	aux2=lista;
    	
    	printf("La lista cuenta con %d elementos\n",conta);
    	printf("Que posicion quieres eliminar\n");
    	scanf("%d",&pos);
		
		while(i<pos){
			lista=lista->siguiente;
			aux=lista->siguiente;
			i++;
		}
		free(lista);
		
			aux2->siguiente=aux;
		
		
		return aux2;
	}


    int main (void){
        struct Lista *milista=crear(10);
        if(milista==NULL){
            printf("No se pudo crear por falta de memoria\n");
            return -1;
        }

        milista=insertar(milista,12);
        milista=insertar(milista,20);
        milista=insertar(milista,2);
        milista=eliminarpos(milista);
        

        mostrar(milista);
        
    

        return 0;
    }
