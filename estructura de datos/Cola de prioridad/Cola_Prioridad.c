#include <stdio.h>
#include <stdlib.h>

        
	 typedef struct ColaPrioridad{
		   int elementos[100];
		   int frente;
		   int detras;
		}ColaPrioridad;
		
		
		void crear(ColaPrioridad *Cola){
			int j=0;
			while(j<5){
				Cola[j].frente=0;
				Cola[j].detras=-1;
				++j;
			 }
			}
		
		
		void encolar(ColaPrioridad *Cola,int elemento,int prioridad){
			if(prioridad<1 || prioridad>5){
				printf("\n%d no es una prioridad valida\n",prioridad);
				return;
			}
			
			if (Cola[prioridad-1].frente !=0 && Cola[prioridad-1].frente-1==Cola[prioridad-1].detras || Cola[prioridad-1].frente==0 && Cola[prioridad-1].detras==99 || Cola[prioridad-1].frente==99 && Cola[prioridad-1].detras==0)
		        printf("\nLa cola est� llena");
		    else{
			    Cola[prioridad-1].detras=++Cola[prioridad-1].detras % 100;
		        Cola[prioridad-1].elementos[Cola[prioridad-1].detras]=elemento;
		    }
		}
		
		
		void desencolar(ColaPrioridad *Cola){
			int eliminado =0;
			int i=1;
			
		while(eliminado == 0){
			if (Cola[i-1].detras !=-1){
			 Cola[i-1].elementos[Cola[i-1].frente]=0;
			 if(Cola[i-1].frente+1 % 100 == Cola[i-1].detras+1 % 100){
			 	Cola[i-1].frente=0;
			 	Cola[i-1].detras=-1;
			 }
			 else
			 Cola[i-1].frente=++Cola[i-1].frente % 100;
			 eliminado=1;
		    }
		    ++i;
		 }
		}	
		
		
		void mostrar(ColaPrioridad *Cola){
		    	int j=0;
		    	
			    	while(j<5){
			    	if (Cola[j].detras==-1 && Cola[j].frente==0)
			        printf("\nNo hay elementos en la cola %d \n",j+1);
			        else{
			    	printf("\nPrioridad %d: ",j+1);
					int i=Cola[j].frente;
				
				if(Cola[j].frente > Cola[j].detras){
						
				    while(i<=99){
				    	printf("%d,",Cola[j].elementos[i]);
				    	++i;
					 }
					 
					 i=0;
					 while(i<=Cola[j].detras){
					 		printf("%d,",Cola[j].elementos[i]);
				    	++i;
					 }
				     	printf("\n");	
					}
					else 
					if(Cola[j].frente <= Cola[j].detras){
						
				    
				    while(i<=Cola[j].detras){
				    	printf("%d,",Cola[j].elementos[i]);
				    	++i;
					 }
					 printf("\n");
					}
			       }
			       ++j;	
			   }
			}
			
