#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//CRIANDO NOVOS TIPOS DE DADOS
typedef struct Paciente{
    //int id;
    long CPF;
    //long telefone;
    char nome[50];
  //  char endereco[4][20];
    struct Paciente *prox;
}P;

typedef struct Lista{
    int qtdPacientes;
    struct Paciente *inicio;
    struct Paciente *meio;
    struct Paciente *fim;
}L;

//FUNÇÕES
L* novaLista(){
    L* lista = (L*)malloc(sizeof(L)); //malloc() -> verifica endereço de memória livre; sizeof() -> calcula qtd de memória por tipo

    if(lista!=NULL){ //verifica lista vazia e inicializa *inicio, *meio e *fim com valor nulo (NULL)
        lista->inicio = NULL;
        lista->meio = NULL;
        lista->fim = NULL;
        lista->qtdPacientes = 0;
    }

    return lista;
}

P* novoPaciente(){
    P *novo = (P*)malloc(sizeof(P));
    printf("Digite o CPF do paciente: ");
    scanf("%d", &novo->CPF);
    printf("Digite o nome do paciente: ");
    scanf("%s", novo->nome);
    novo->prox = NULL;

    return novo;
}

void riscoBaixo(L *lista){
    P *novo = novoPaciente();

    lista->qtdPacientes++;

    //se a fila estiver vazia *inicio e *fim apontam para novo
    if(lista->inicio==NULL){
        lista->inicio = novo;
        lista->meio = novo;
        lista->fim = novo;
    }else{//Grau de risco 0: inserção no final
        P *aux;

        aux = lista->fim;
        lista->fim->prox = novo;
        lista->fim = novo;
    }

    listarPacientes(lista);
}

void riscoMedio(L *lista){
    P *novo = novoPaciente();

    lista->qtdPacientes++;

    //se a lista estiver vazia *inicio, *meio e *fim apontam para novo
    if(lista->inicio==NULL){
        lista->inicio = novo;
        lista->meio = novo;
        lista->fim = novo;
    }else{//Grau de risco 1: inserção no meio
        P *aux;
        int x;
        if(lista->qtdPacientes==2){
            int y = lista->qtdPacientes;
            x = y/2;
            aux = lista->inicio;
            for(int i=0; i<=x; i++){
                aux = aux->prox;
                novo->prox = aux->prox;
                lista->meio = novo;
            }
        }else{
            aux = lista->meio;
            novo->prox = aux;
            lista->meio = novo;
        }
    }

    listarPacientes(lista);
}

void riscoAlto(L *lista){
    P *novo = novoPaciente();

    lista->qtdPacientes++;

    //se a lista estiver vazia *inicio e *fim apontam para novo
    if(lista->inicio==NULL){
        lista->inicio = novo;
        lista->meio = novo;
        lista->fim = novo;
    }else{//Grau de risco 2: inserção no início
        P *aux = lista->inicio;
        novo->prox = aux;
        lista->inicio = novo;

    }
    listarPacientes(lista);
}

void listarPacientes(L *lista){
    P *aux;

    //verifica fila vazia
    if(lista->inicio == NULL){
        printf("\n Lista Vazia!");
    }else{//lista com no minimo um elemento
        aux = lista->inicio;// recebe o primeiro elemento

        do{//percorre todos os elementos da lista
            printf("%s ",aux->nome); //imprime o campo num
            aux = aux->prox; // atualiza o aux para o proximo
        }while(aux != NULL);//para ao chegar no ultimo elemento
        printf("\n");
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int op=0;
    L *lista = novaLista();

    while(op != 5){
        printf("\n 1 - Novo paciente Grau de risco 0");
        printf("\n 2 - Novo paciente Grau de risco 1");
        printf("\n 3 - Novo paciente Grau de risco 2");
        printf("\n 4 - Remover paciente da lista de atendimento");
        printf("\n 5 - Sair");
        printf("\n Digite a opcao:\n");
        scanf("%d",&op);

        switch(op){
        case 1:
            riscoBaixo(lista);
        break;
        case 2:
            riscoMedio(lista);
        break;
        case 3:
            riscoAlto(lista);;
        break;
       /* case 4:
            removerPaciente(lista);
        break;*/
        case 5:
            exit(0);
        break;
        default:
            printf("opcao invalida!");
        }
    }



    return 0;
}
