/*Escreva um programa em C que preencha um vetor de 10 inteiros com informações
vindas de um arquivo e escreva em outro arquivo o menor elemento, o maior elemento, bem
como a média dos elementos do vetor, como ilustrado a seguir. */

#include <stdio.h>
#include <stdlib.h>

int main(void){
    // Declara uma matriz de caracteres para armazenar a linha lida.
    int vetor[10];
    char linha[100];
    int n = 0;
    float media = 0;
    
    //cria umarquivo de somente leitura
    FILE *entrada = fopen("entrada_q2.txt", "rt");
    if (entrada == NULL) {
        printf("Erro na abertura do arquivo de entrada!\n");
        exit(1);
    }
   
    //cria umarquivo de somente escrita
    FILE *saida = fopen ("saida_q2.txt", "wt");
    if(saida == NULL){
        printf ("Erro na abertura do arquivo de saida!\n");
        exit(1);
    }

    while(fgets(linha, 100, entrada) != NULL){
        sscanf(linha, "%d", &vetor[n]);
        media = media + vetor[n];

        n++;
    }

    int maior = vetor[0];
    int menor = vetor[0];

    for(n = 0; n < 10; n++){
        if(vetor[n] < menor){
            menor = vetor[n];
        }

        if(vetor[n] > maior){
            maior = vetor[n];
        }
    }

    //escreve no arquivo saida o nome, media e asituaçao do aluno
    fprintf(saida, "Menor elemento: %d \nMaior elemento: %d \nMedia: %f", menor, maior, media/10);

    fclose(entrada);
    fclose(saida);
   
   return 0;
}