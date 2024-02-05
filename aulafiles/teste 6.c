#include <stdio.h>

int main(void){
    // Declara uma matriz de caracteres para armazenar a linha lida.
    char c[20];
    
    FILE * arquivo = fopen ("entrada_escrita.txt", "w");
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

    //fputc('A', arquivo);
    fputs('AAAA', arquivo);
    fprintf(arquivo, "Texto");
    // Escreve a string "Texto" no arquivo.
    
    if (fclose(arquivo) == 0) {  // Corrigindo a condição para verificar se o arquivo foi fechado com sucesso
        printf("arquivo fechado");
    }

    return 0;
}