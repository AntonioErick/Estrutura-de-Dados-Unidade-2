#include <stdio.h>

int main(void){

    FILE * arquivo = fopen ("entrada.txt", "wt");
    if(arquivo == NULL){
         printf ("Erro na abertura do arquivo!\n");
        exit(1);
    }
    else{
        printf("arquivo criado");
    }
//fclose para fechar o arquivo após a sua abertura.
    if (fclose(arquivo)){
        printf("arquivo fechado");
    }

    return 0;
}