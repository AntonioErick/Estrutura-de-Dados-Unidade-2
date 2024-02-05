#include <stdio.h>
#include <stdlib.h>

int main(void){
    float n1, n2, n3, media = 0;

    // Declara uma matriz de caracteres para armazenar a linha lida.
    char nome[100];
    char linha[100];
    
    //cria umarquivo de somente leitura
    FILE *entrada = fopen("entrada_q3.txt", "r");
    if (entrada == NULL) {
        printf("Erro na abertura do arquivo de entrada!\n");
        exit(1);
    }
   
    //cria umarquivo de somente escrita
    FILE *saida = fopen ("saida_q3.txt", "w");
    if(saida == NULL){
        printf ("Erro na abertura do arquivo de saida!\n");
        exit(1);
    }

    while(fgets(linha, 100, entrada) != NULL){
        sscanf(linha, "%s\t%f\t%f\t%f", nome, &n1, &n2, &n3);
        media = (n1 + n2 + n3)/3;

        //escreve no arquivo saida o nome, media e asituaçao do aluno
        fprintf(saida, "%s\t%.1f\t%s\n", nome, media, (media >= 7.0) ? "aprovado" : "reprovado");
    }

    fclose(entrada);
    fclose(saida);
   
   return 0;
}
