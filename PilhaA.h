#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#ifndef PILHA_H
#define PILHA_H


typedef struct bloco bloco;
typedef struct item item;
typedef struct pilha pilha;



struct item{
	char c;
	int n;
};

struct bloco{
	item i;
	bloco *prox;
};

struct pilha{
	bloco *topo;
	bloco *base;
	int contp,size;
	
};

//void
void iniciar(pilha *p);
void push(pilha *p,item i);
void pop(pilha *p,item *i);
void imprimePilhaA(pilha *p);
void imprimePilhaC(pilha *p);
bool verificaParenteses(pilha *p);
void destruir(pilha *p);
void copia(pilha *p,pilha *p2);
void coprimos(pilha *p);
#endif


