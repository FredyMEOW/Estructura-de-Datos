
struct Pilaarreglo * crear(int capacidad){
	struct Pilaarreglo* nueva = (struct Pilaarreglo *)malloc(sizeof(struct Pilaarreglo)); 
	nueva->capacidad = capacidad; 
	nueva->tope = -1; 
	nueva->arreglo = (int*)malloc(nueva->capacidad*sizeof(int)); 
	return nueva;
	}
	
int push(struct Pilaarreglo* pila, int dato){
	
	if(pila==NULL){
		return -1;
	}
	pila->arreglo[++pila->tope]=dato;
} 

int pop(struct Pilaarreglo* pila){
	if(pila==NULL){
		return 0;
	}
	if(pila->tope==-1){
		return 0;
	}
	
	return pila->arreglo[pila->tope--];
	
}

void mostrar(struct Pilaarreglo* pila){
	
	for(int i=0;i<=pila->tope;i++){
		printf("%d ,",pila->arreglo[i]);
	}
}

