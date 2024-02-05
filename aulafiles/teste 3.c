#include <stdio.h>

int main(void){
    int c;

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
    c = fgetc(arquivo);
    printf("%c\n", c);

    
    if (fclose(arquivo)){
        printf("arquivo fechado");
    }

    return 0;
}