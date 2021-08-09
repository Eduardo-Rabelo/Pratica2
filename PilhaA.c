#include "PilhaA.h"

void iniciar(pilha *p){
	p->base = (bloco*) malloc(sizeof(bloco));
	p->topo = p->base;
	p->base->prox = NULL;
	p->contp=0;
	p->size=0;
}
void push(pilha *p,item i){
	bloco *aux = (bloco*) malloc(sizeof(bloco));
	aux->i=i;
	if(aux->i.c=='('){
		p->contp++;
	}
	else if(aux->i.c==')'){
		p->contp--;
	}
	aux->prox = p->topo;
	p->topo=aux;
	p->size=p->size+1;
}
void pop(pilha *p,item *i){
	bloco *aux = (bloco*) malloc(sizeof(bloco));
	if( p->base == p->topo || p == NULL){
		return;
	}
	aux = p->topo;
	
	if(aux->i.c==')'){
		p->contp++;
	}
	else if(aux->i.c=='('){
		p->contp--;
	}
	
	p->topo = aux->prox;
	i->c=aux->i.c;
	i->n=aux->i.n;
	aux->prox=NULL;
	free(aux);
	p->size=p->size-1;
}
void imprimePilhaA(pilha *p){
	bloco *aux = (bloco*) malloc(sizeof(bloco));
	if( p->base == p->topo || p == NULL){
		return;
	}
	aux=p->topo;
	while(aux != p->base){
		printf("%c",aux->i.c);
		aux=aux->prox;
	}
}

bool verificaParenteses(pilha *p){
	if(p->contp==0){
		return true;
	}
	else{
		return false;
	}
}

void destruir(pilha *p){
	bloco *aux;
	while(p->topo->prox != NULL ){
		aux = p->topo;
		p->topo = aux->prox;
		aux->prox = NULL; 
		free(aux);
	}
}


void imprimePilhaC(pilha *p){
	bloco *aux = (bloco*) malloc(sizeof(bloco));
	if( p->base == p->topo || p == NULL){
		return;
	}
	aux=p->topo;
	while(aux != p->base){
		printf("%d ",aux->i.n);
		aux=aux->prox;
	}
}

void coprimos(pilha *p){
	bloco *aux;
	int x[500],y[500],n[500],contx=0,cont1=0,cont2=0,cont3=0,conti=0,contmax=0,conty=0,contn=0;
	
	for(int i=0;i<500;i++){
		x[i]=0;
		y[i]=0;
		n[i]=0;
	}
	
	aux=p->topo;
	while(aux->prox!=NULL){
		n[contn]=aux->i.n;
		contn++;
		printf("\n\nDivisores de %d\n",aux->i.n);
		for(int i=0;i<aux->i.n;i++){
			if(aux->i.n%((aux->i.n)-i)==0){
				x[contx]=((aux->i.n)-i);
				printf("%d ",x[contx]);
				contx++;
			}
		}
		aux=aux->prox;
	}
	
	aux=p->topo;
	contn=0;
	
	printf("\n\nContx:");
	for(int i=0;i<contx;i++){
		if(x[i]==1&&i!=0){
			if(cont1!=0){
					
				cont2=cont2+cont1;
				cont3=cont2;
				contmax=cont3;

				conti=1;
				printf("\n\n\ncont1:%d\n\n----------------------------------------\n\n n[contn]=%d\n",cont1,n[contn]);
				while(cont1!=0){

					printf("%d ",x[cont3]);
					for(int i=0;i<n[contn];i++){
						if(i%x[cont3]!=0){
							y[conty]=i;
							conty++;
						}
					}
					cont3--;
					cont1--;
				}
				printf("\n----------------------------------------\n\n\n\n");
				contn++;
			}
		}

		cont1++;
	}
}


//void copia(pilha *p,pilha *p2){
//
//	bloco *aux;
//	
//	aux = p->topo;
//	p->topo=p->topo->prox;
//	
//	
//	aux->prox = p2->topo;
//	p2->topo=aux;
//	p2->size=p2->size+1;
//	
//}
