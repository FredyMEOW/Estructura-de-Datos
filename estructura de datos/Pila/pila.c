



struct Pila * crear(int dato){
	struct Pila *nueva=NULL;
	
	nueva=(struct Pila *)malloc(sizeof(struct Pila));
	if(nueva==NULL){
		return NULL;
	}
	nueva->dato=dato;
	nueva->abajo=NULL;
	return nueva;
}


struct Pila * push(struct Pila *pila,int dato){
	struct Pila *nuevo=crear (dato);
	nuevo->abajo=pila;
	return nuevo;
	
}


void mostrar(struct Pila *pila){
	while(pila!=NULL){
		printf("%d \n",pila->dato);
		pila=pila->abajo;
		
	}
	printf("\n");
	
}


struct Pila * pop(struct Pila *pila){
	struct Pila *auxdi=pila->abajo;
	int auxdato=pila->dato;
	free(pila);
	pila=auxdi;
	return(pila);
}


