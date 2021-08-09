#include "PilhaA.h"
#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
//#include <stdbool.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	char c[100],letra='c';
	int ic,questao=1,cont=12;
	pilha pA,pB1,pB2,pC1;
	item i,i2,pa;
	pa.c='(';

	printf("Questão 1:\nLetra a:\n");
			

	printf("Expressão:");
	fgets(c,100,stdin);
	fputs(c,stdout);
	iniciar(&pA);
	
	while(c[ic]!='\0'){
		i.c=c[ic];
		push(&pA,i);
		ic++;
	}

	imprimePilhaA(&pA);
	if(verificaParenteses(&pA)){
		printf("\n\nCORRETO");
	}
	else{
		printf("\n\nERRADO");
	}
	
	destruir(&pA);


	printf("\n\nLetra c:\n");
	iniciar(&pC1);
	srand(time(NULL));
	for(int i=0;i<20;i++){
		printf("\n");
		pa.n=rand()%98+1;
		push(&pC1,pa);
		
		printf("%d",pa.n);
	}
	printf("\n\n");
	imprimePilhaC(&pC1);
	printf("\n\n");
	coprimos(&pC1);
		
	



	
	return 0;
}
