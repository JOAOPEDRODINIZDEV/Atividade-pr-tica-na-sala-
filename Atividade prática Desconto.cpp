#include <stdio.h>
#include <locale.h>

int main(){
	    setlocale(LC_ALL,"Portuguese_Brazil");
	    int idadea,idadeb;

       printf ("Programação de Desconto\n\n");
	 
	      printf("informe  a sua idade:\n");
      	scanf("%d",&idadea);
	
	      printf("Informe a sua idade\n");
      	scanf("%d", &idadeb);
	
       
         if((idadea %2 !=0) || (idadeb %2 !=0)){
        	printf("Você ganhou o Desconto");
		
		
	
	
	}
	return 0;
}
