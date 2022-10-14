#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	int idadea,idadez;
	
	printf("Digite  a sua idade:\n");
	scanf("%d",&idadea);
	
	printf("Digite a sua idade\n");
	scanf("%d", &idadez);
	
        if(idadea %2==0){
        	printf("Parabéns, você ganhou o Desconto");
		
		
	
	
	}
	return 0;
}
