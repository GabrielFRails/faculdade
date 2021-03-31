#include <stdio.h>
#include <stdlib.h>

//Estrutura base do nó.
struct node {
    int nData;
    struct node *pLink;
};
 
//Função pra printar o nó na tela.
void displayLL(struct node *p){
    printf("Mostrando a lista:\n"); 
    if(p){
        do{
            printf(" %d", p->nData);
            p=p->pLink;
        }
        while(p);
    }
    else
        printf("Lista vazia.");
}
 
 
 
int main(){

    struct node *pNode1 = NULL;
    struct node *pNode2 = NULL;
    struct node *pNode3 = NULL;
    struct node *pNode = (struct node*) malloc(sizeof(struct node*) * 10);
    int i, j, menor;
    for(i=0; i<10; i++) pNode[i].nData = 1 + i;
    for(i=0; i<9; i++) pNode[i].pLink = (pNode[i+1]);
    pNode[9].pLink = NULL;

    //Criando os nos e associando os dados.
    /*pNode1 = (struct node*) malloc(sizeof(struct node*));
    pNode1->nData = 10;
     
    pNode2 = (struct node*) malloc(sizeof(struct node*));
    pNode2->nData = 20;
     
    pNode3 = (struct node*) malloc(sizeof(struct node*));
    pNode3->nData = 30;*/

     
    //Conectando os nós
    /*pNode1->pLink = pNode2;
    pNode2->pLink = pNode3;  
    pNode3->pLink = NULL;*/
     
    //Mostrando a lista.
    if(pNode1) displayLL(pNode1);
    printf("\n");
  return 0;
}