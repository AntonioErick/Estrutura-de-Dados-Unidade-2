#include <stdio.h>
#include <stdlib.h>

int main(void){
    // Declara uma matriz de caracteres para armazenar a linha lida.
    char c[20];

    //cria um arquivo do tipo txt, 'r' significa somente leitura.
    FILE * arquivo = fopen ("entrada.txt", "r");
    if(arquivo == NULL){
         printf ("Erro na abertura do arquivo!\n");
        exit(1);
    }
    else{
        printf("arquivo criado");
    }
    
    // Lê o primeiro caractere do arquivo
    int caractere = fgetc(arquivo);
    printf("%c\n", caractere);

    // Lê uma linha do arquivo (até 19 caracteres) e armazena em 'c'.
    fgets(c, 20, arquivo);
    printf("%s\n", c);

    // Lê uma palavra do arquivo e armazena em 'c'.
    fscanf (arquivo, "%s", c);
    printf("%s\n", c);

    if (!fclose(arquivo)){
        printf("arquivo fechado");
    }

    return 0;
}