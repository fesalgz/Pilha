#include <stdio.h>

#define TAMPILHA 10

int pilha[TAMPILHA] = {0,0,0,0,0,0,0,0,0,0};
int topo = 0;


void lista_elementos (){
    printf("\n=====================Pilha Atual====================\n");

    //primeiro bloco inicializa, segundo bloco é a condição(logica) ver se vai dar certo, o ultimo imcrementa
    for(int i=0 ; i< TAMPILHA ; i++){
        printf("-");
        printf("|%d|", pilha[i]);
        printf("-");
    }
    printf("\n\nTopo: %d", topo);
}

//Função para inserir um elemento
void push() {
    int val; //cria uma variavel para receber o num. do usuario
    printf("Digite um número inteiro: ");
    scanf("%d", &val);
    //se o topo for menor que o tamanho da pilha, entra no if
    if (topo < TAMPILHA) {
        pilha[topo] = val; //pilha vai receber no topo o valor da variavel que o usuario digitar
        topo = topo + 1;
        lista_elementos();
    } else {
        printf("Ta lotado irmao");
    }
}

void pop() {
    topo = topo - 1;
    if (topo = pilha[topo]) {



    }
}



int main () {

push();

}
