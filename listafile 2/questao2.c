/*Implemente um programa em C para ler o nome e as notas de um número N de alunos e armazená-los
em um arquivo.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct alunos{
    char nome[50];
    float nota;
}Alunos;

int main(){
    int i, qtd = 0;
    Alunos aluno;

    FILE *alunos = fopen ("alunos.txt", "a");
    if (alunos == NULL){
        printf ("Erro!");
        exit (1);
    }

    printf ("INFORME O TOTAL DE ALUNOS: \n");
    scanf ("%d", &qtd);

    for (i = 0; i < qtd; i++){
        printf ("INFORME O NOME DO ALUNO %i:\n", i + 1);
        scanf (" %[^\n]s", aluno.nome);

        printf ("INFORME A NOTA DO ALUNO %i:\n", i + 1);
        scanf ("%f", &aluno.nota);

        fprintf (alunos, "Nome: %s\t Nota: %.1f\n", aluno.nome, aluno.nota);
    }

    fclose (alunos);

    return 0;
}