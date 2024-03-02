#include <stdio.h>
#include <stdlib.h>

typedef struct frutas{
    char nome[50];
    float preco;
}Frutas;

int main(){
    Frutas aux;
    char qtd = 0;

    FILE *arquivo = fopen ("frutas.txt", "a");
    if(arquivo == NULL){
        printf("Erro");
        exit(1);
    }

    do{
        printf ("Informe o nome da fruta: ");
        scanf (" %[^\n]s", aux.nome);

        printf ("Informe o valor da fruta: ");
        scanf (" %f", &aux.preco);

        fprintf (arquivo, "Nome: %s\t Preço: %.2f\n", aux.nome, aux.preco);

        printf ("Deseja cadastrar mais uma fruta? |1 - SIM| |0 - NAO|");
        scanf (" %c", &qtd);

    }while (qtd != '0');

    fclose (arquivo);

    return 0;
}