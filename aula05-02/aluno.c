
/*TAD: Aluno*/
#include "aluno.h"
#include <stdlib.h>
#include <stdio.h>

struct aluno{
    char nome[20];
    int matricula;
    float IRA;
};

Aluno * recebe_dados(void){
    Aluno * estudante = (Aluno *)malloc(sizeof(Aluno));
    if(estudante == NULL){
        printf("Apaga apaga");
        exit(1);
    }
(
    printf("Informe o nome do aluno: \t");
    scanf(" %[^\n]", estudante->nome);

    printf("Informe a matricula do aluno: \t");
    scanf(" %d", &estudante->matricula);

    printf("Informe o IRA do aluno: \t");
    scanf(" %f", &estudante->IRA);

    return estudante;
}

void imprime(Aluno * aluno){
    printf("Dados do aluno\n Nome: %s \n Matricula: %d \n IRA: %f", aluno->nome, aluno->matricula, aluno->IRA);
}