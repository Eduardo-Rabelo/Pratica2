# Pratica2
O programa foi feito em c no IDE DEV C++ em um notebook cujo sistema operacional é o windows

Questão 2:

PilhaA.h:
criação das structs:


struct item(composta por um inteiro e um char).

struct bloco(composta por um item e um ponteiro do tipo bloco que aponta para o próximo bloco,ou para NULL).

struct pilha(composta por dois ponteiros do tipo bloco,um apontando para o topo e outro para a base da pilha,e por dois inteiros,contp para ontar o número de chars'(' pra resolver a letra a e size,pra determinar o tamanho da pilha).

declaração dos métodos:

void iniciar(pilha *p);(recebe um endereço de uma pilha como parâmetro)
void push(pilha *p,item i);(recebe um endereço de uma pilha e um item como parâmetro)
void pop(pilha *p,item *i);(recebe um endereço de uma pilha e um endereço de item como parâmetro)
void imprimePilhaA(pilha *p);(recebe um endereço de uma pilha como parâmetro)
void imprimePilhaC(pilha *p);(recebe um endereço de uma pilha como parâmetro)
bool verificaParenteses(pilha *p);(recebe um endereço de uma pilha como parâmetro)
void destruir(pilha *p);(recebe um endereço de uma pilha como parâmetro)
void copia(pilha *p,pilha *p2);(recebe um endereço de duas pilhas como parâmetro)
void coprimos(pilha *p);(recebe um endereço de uma pilha como parâmetro)

pilhaA.c:
 
 definição dos métodos:

 void iniciar(pilha *p);
  este método é responsável por iniciar uma pilha vazia.Ele faz o ponteiro da base apontar pra uma posiao de memória capaz de suportar
  o tamanho de um bloco,alocada por meio do malloc.O ponteiro topo é apontado para a base e o ponteiro prox do bloco apontado pela base 
  é apontado para NULL.Tanto size,quanto contp são igualados a 0.
  
 void push(pilha *p,item i);
  um ponteiro auxiliar aux do tipo bloco é criado.Há dois ifs responsáveis por aumentar contc caso o char do novo item da pilha seja '(',
  ou diminuir caso o char seja')'.O ponteiro prox do bloco apontado por aux é igualado ao topo,que por sua vez é igualado a aux,o que faz 
  com que o item passado como parâmetro seja o novo topo da pilha.O int size da pilha é acrescido em um,pois foi acreescentado um item á piulha.
  
 void pop(pilha *p,item *i);
   um ponteiro auxiliar aux do tipo bloco é criado.Há dois ifs responsáveis por aumentar contc caso o char do novo item da pilha seja ')',
  ou diminuir caso o char seja'('.O ponteiro prox do bloco apontado por aux é igualado ao topo,topo é igalado a aux->prox,o char e o int de 
  aux são salvos no bloco apontado pelo ponteiro i.prox de aux é apontado pra NULL e a memória ocupada pelo bloco apontado por aux é liberada
  com o free.Como um elemento é retirado da pilha,o size é reduzido em 1.
  

 void imprimePilhaA(pilha *p);
 aux é criado da mesma forma que nos métodos anteriores,um if verifica se a pilha está vazia
 e,caso esteja,há um return no if que impede a execução do restante do método.Caso a pilha 
 não esteja vazia,aux é igualado ao topo da fila e um while faz os caracteres da pilha sejam
 imprimidos do topo pra base;
 
 void imprimePilhaC(pilha *p);
 basicamente igual ao método "void imprimePilhaA(pilha *p);",porém são os inteiros e não os 
 chars dos itens da pilha que são impressos.
 
bool verificaParenteses(pilha *p);
retorna true se contp for zero e false caso contrário.

void destruir(pilha *p);
há um while que faz as seguintes operações enquanto o topo->prox da pilha for diferente de NULL,
ou seja,enquanto o topo for diferente da base:
O ponteiro prox do bloco apontado por aux é igualado ao topo,topo é igalado a aux->prox,que por
sua vez é igualado a NULL.A memória ocupada pelo bloco apontado por aux é liberada com o free.
Desse modo,todos os elementos da pilha são removidos e os espaços que ocupavam são liberados para 
serem usados.

void coprimos(pilha *p);





main.c
Letra A:
uma expressão é requerida ao usuário,uma pilha é iniciada,um while ded custo computacional 
n(número de caracteres digitados pelo usuário) percorre a expressão digitada pelo usuário 
de modo que cada caractere da expressão seja colocado em um item, que, logo em seguida, é 
adicionado à pilha.A pilha é mostrada na tela através da função "imprimePilhaA(pilha *p);".
Logo depois,um if printa "CORRETO",caso a função "verificaParenteses(pilha *p)" retorne true.
caso a função retorne false,é printado "ERRADO" na tela.A pilha é então destruída pela função
"destruir(pilha *p);".Dessa forma a letra a da questão 2 é concluída com custo computacional 
n,sendo n o número de caracteres da expressão.o while da função "imprimePilhaA(pilha *p);" tem
custo 2n,e o while da função main também tem custo 2n,portanto o custo da letra a seria 4n,porém,
para números n muito grandes,o 4 que multiplica n pode ser desconsiderado.

Letra C:
Uma pilha é iniciada através da função "iniciar(pilha *p)",um gerador de números aleatórios é
iniciado com srand(time(NULL), e um for gera uma pilha de 20 itens da segunte maneira:
iguala o inteiro n de um item a um número aleatório entre 1 e 99,e inclui esse item na fila.





 
 

  
  
  
  
  
  
  

