#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int value;
    int indice;
    struct no *prox;
} Lista;

Lista *p, *q, *primeiro = NULL;
int qtd = 0, indice, val;

void imprimir_lista();
void inserir_elemento(int num, int ind);
void limpa_lista(Lista* prim);
void excluirElemento_valor(int valor);
void excluirElemento_ind(int ind);
void att_indices(int ind);

int main(){

    int i, valor, escolha, choice;
    printf("Digite o numero de nos: ");
    scanf("%d", &qtd);
    printf("Vamos inicializar a lista...\n");

    for(i=0; i<qtd; i++){
        printf("indice [%d], digite o valor: ", i);
        scanf("%d", &valor);
        inserir_elemento(valor, i);
    }
    p->prox = primeiro;

    while(1){
        printf("O que gostaria de fazer em seguida?\n");
        printf("1. Quero ver a lista\n");
        printf("2. Quero deletar um elemento da lista\n");
        printf("3. Quero limpar a lista\n");
        printf("4. Ja deu quero ir embora\n");
        
        scanf("%d", &escolha);
        if(escolha == 4) break;

        switch(escolha){
            case 1: 
                p = primeiro;
                for(i=0; i<qtd; i++){
                    imprimir_lista();
                }
                break;

            case 2:
                p = primeiro;
                val = 0;
                for(i=0; i<qtd; i++){
                    imprimir_lista();
                }
                printf("Digite 1 para excluir por valor e 2 para ser por indice: ");
                scanf("%d", &choice);
                
                if(choice == 1){
                    printf("Digite o valor: ");
                    scanf("%d", &valor);
                    excluirElemento_valor(valor);
                } else if(choice == 2){
                    printf("Digite o indice: ");
                    scanf("%d", &valor);
                    excluirElemento_ind(valor);
                }
                //printf("%d --\n", val);
                if(val == 1) {
                    qtd--;
                    p = primeiro;
                    for(i=0; i<qtd; i++){
                        att_indices(indice);
                    }
                    //printf("(%p) - (%p) -(%p)\n", q->prox, p, p->prox);
            
                } else if(val == -1) printf("Valor ou indice nao encontrado\n");
                break;
            case 3:
                limpa_lista(primeiro);
                printf("Done!\n");
                return 0;
            default:
                printf("opcao invalida!\n");
                break;
        }
    }
    limpa_lista(primeiro);
    return 0;
}

void inserir_elemento(int num, int ind){
    p = (Lista *) malloc(sizeof(Lista));
    p->value = num;
    p->indice = ind;
    p->prox = NULL;

    if(primeiro == NULL){
        primeiro = p;
    } else {
        q->prox = p;
    }

    q = p;
}

void imprimir_lista(){
    printf("(%p) [%d] = %d -> ", p, p->indice, p->value);
    p = p->prox;
}

void limpa_lista(Lista* prim){
    if(prim->indice == qtd-1) return;
    limpa_lista(prim->prox);
    free(prim);
}

void excluirElemento_valor(int valor){
    p = primeiro;
    int control = qtd, n = 0;
    while (control--) {
        if(p -> value == valor){
            indice = p->indice;
            q -> prox = p -> prox;
            free(p);
            n = 1;
            break;
        }
        q = p;
        p = p -> prox;
    }
    if(n==1) val = 1;
    else val = -1;
}

void excluirElemento_ind(int ind){
    p = primeiro;
    int control = qtd, n;
    while (control--) {
        if(p -> indice == ind){
            indice = p->indice;
            q -> prox = p -> prox;
            free(p);
            n = 1;
            break;
        }
        q = p;
        p = p -> prox;
    }

    if(n==1) val = 1;
    else val = -1;
}

void att_indices(int ind){
    int v = p->indice;
    if(p->indice > ind) p->indice = v-1;
    //controle do último índice, verificação apenas
    //if(p->indice == qtd-1) printf("(%p) - (%d) - (%p)\n", p, p->value, p->prox);
    p = p->prox; 
}