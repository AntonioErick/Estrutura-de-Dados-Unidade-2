/*Faça um programa em C que solicita ao usuario informaçoes de funcionarios via teclado. 
As informaçoes digitadas pelo o usuario sao: id, nome e salário do funcionário. 
Armazene as informaçoes digitadas pelo usuario em um arquivo texto.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct funcionario{
    char id[50];
    char nome[50];
    float salario;
}Funcionario;

int main(){
    Funcionario fun;

    FILE *arquivo = fopen ("funcionario.txt","a");
    if(arquivo == NULL){
        printf("Erro");
        exit(1);
    }

    int qtd, i;
    printf ("INFORME A TOTAL DE FUNCIONARIOS: \n");
    scanf ("%d", &qtd);

    for(i = 0; i < qtd; i++){
        printf ("INFORME O ID DO FUNCIONARIOS %i:\n", i + 1);
        scanf ("%s", fun.id);

        printf ("INFORME O NOME DO FUNCIONARIOS %i:\n", i + 1);
        scanf (" %[^\n]s", fun.nome);

        printf ("INFORME O SALARIO DO FUNCIONARIOS %i:\n", i + 1);
        scanf ("%f", &fun.salario);

        fprintf (arquivo, "Nome: %s\tId: %s\tSalario: %.2f\n", fun.nome, fun.id, fun.salario);
    }
    fclose (arquivo);
    return 0;
}