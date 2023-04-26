#include <stdio.h>
#include <locale.h>

#define TAMPILHA 10

int pilha[TAMPILHA] = {0,0,0,0,0,0,0,0,0,0};
int topo = 0;


void lista_elementos (){
    printf("\n=====================Pilha Atual====================\n");

    //primeiro bloco inicializa, segundo bloco � a condi��o(logica) ver se vai dar certo, o ultimo imcrementa
    for(int i=0 ; i< TAMPILHA ; i++){
        printf("-");
        printf("|%d|", pilha[i]);
        printf("-");
    }
    printf("\n\nTopo: %d\n\n", topo);
}

//Fun��o para inserir um elemento
void push() {
    int val; //cria uma variavel para receber o num. do usuario
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &val);
    //se o topo for menor que o tamanho da pilha, entra no if
    if (topo < TAMPILHA) {
        pilha[topo] = val; //pilha vai receber no topo o valor da variavel que o usuario digitar
        topo = topo + 1; // topo incrementa
        lista_elementos();
    } else {
        printf("Ta lotado irmao");
    }
}

//fun��o remover
void pop() {
    if (topo > 0) { //para remover o topo tem que ser maior que 0
        // para remover um elem. o top tem q ser -1, pq se removermos somente o top n tera ngm para apagar
        pilha[topo - 1] = 0;
        topo = topo - 1; //topo decrementa
        lista_elementos();
    } else {
        printf("\n\nT� vazio j�, irm�o\n\n");
    }
}

void clear(){

    //repeti��o para zerar todas as posi��es da fila

    for (int i = 0 ; i < TAMPILHA ; i++) {
        pilha[i] = 0;
    }
    topo = 0;
}


int main () {

 setlocale(LC_ALL, "Portuguese");

    int opcao = 0;
//inicio do la�o de repeti��o
do {
    printf("\nSELECIONE A OP��O ABAIXO:\n\n");
    printf("[1] - Inserir (Push)\n");
    printf("[2] - Remover (Pop)\n");
    printf("[3] - Listar\n");
    printf("[4] - Limpar a pilha (Clear)\n");
    printf("[-1] - Sair\n");
    printf("\nDigite a op��o desejada: \n");
    scanf("%d", &opcao);

    //
    switch(opcao) {

case 1:
    push();
    break;

case 2:
    pop();
    break;

case 3:
    lista_elementos();
    break;

case 4:
    clear();
    break;

case -1:
    break;

default:
    printf("Mardito, digite dentro da faixa\n");
    break;
        }
    } while (opcao != -1); //fazendo a verifica��o de da op�ao diferente de -1

    return 0;
}
