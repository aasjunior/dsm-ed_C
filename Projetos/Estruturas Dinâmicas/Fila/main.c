#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//CRIA��O DE NOVOS TIPOS DE DADOS
typedef struct Elemento{
    int num; //guarda o valor
    struct Elemento *prox; //aponta para o pr�ximo elemento (endere�o de mem�ria)
}E;


typedef struct Fila{ //estrutura de controle (manipula��o dos ponteiros de *inicio e *fim)
    struct Elemento *inicio; //aponta para o primeiro elemento
    struct Elemento *fim; //aponta para o �ltimo elemento
}F;



//FUN��ES
F* cria_fila(){
    F* fi = (F*)malloc(sizeof(F)); //malloc() -> verifica endere�o de mem�ria livre; sizeof() -> calcula qtd de mem�ria por tipo

    if(fi!=NULL){ //verifica fila vazia e inicializa *inicio e *fim com valor nulo (NULL)
        fi->fim = NULL:
        fi->inicio = NULL:
    }
    return fi;
}

void insere_elemento(F *fi){
    //alocar o novo elemento dinamicamente
    E *novo = (E*)malloc(sizeof(E)); //cria elemento que ser� inserido na fila
    printf("Digite o valor a ser inserido:");
    scanf("%d ",&novo->num);
    novo->prox = NULL;

    //se a fila estiver vazia *inicio e *fim apontam para novo
    if(fi->inicio==NULL){
        fi->inicio = novo;
        fi->fim = novo;
    }else{ //se a fila j� possui elementos
        fi->fim->prox = novo;
        fi->fim = novo;
    }
}

void consulta_fila(F *fi){ //fun��o que exibe os elementos dentro da fila
    E *aux;

    //verifica fila vazia
    if(fi->inicio==NULL){
        printf("\nFila Vazia!");
    }else{
        aux = fi->inicio;
        do{ //percorre todos os elementos da fila
            printf("%d",aux->num); //imprime o campo num
            aux = aux->prox; //atualiza o aux para o proximo elemento
        }while(aux!=NULL); //encerra o loop ao chegar no �ltimo elemento
        printf("\n");
    }
}

void remove_elemento_fila(F *fi){
    E *aux;

    if(fi->inicio==NULL){
        printf("\nFila Vazia");
    }else{}
}


//PRINCIPAL
int main(){
    setlocale(LC_ALL, "Portuguese");

    int op=0;
    F *fi = cria_fila();//cria elemento fi (fila) atribuindo nulo para os ponteiros de *inicio e *fim

    do{
        printf("\n1 - Inserir");
        printf("\n2 - Consultar");
        printf("\n3 - Remover");
        printf("\n4 - Esvaziar a fila");
        printf("\n5 - Sair");
        printf("\n\nDigite a op��o:");
        scanf("%d",&op);

        switch(op){
            case 1:
                insere_elemento(fi);
                break;
            case 2:
                consulta_fila(fi);
                break;
            case 3:
                remove_elemento_fila(fi);
                break;
            case 4:
                esvazia_fila(fi);
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("Opc�o inv�lida!");
                break;
        }
    }while(op!=5);
    return 0;
}
