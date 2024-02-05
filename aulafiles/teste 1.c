#include <stdio.h>

int main(void){

/*Abre um arquivo chamado "entrada.txt" no modo de escrita de texto ("wt"). A função fopen retorna um 
ponteiro para um tipo FILE, que é usado para operações de arquivo. O ponteiro resultante é armazenado 
na variável arquivo.*/
    FILE * arquivo = fopen ("entrada.txt", "wt");
    if(arquivo == NULL){
         printf ("Erro na abertura do arquivo!\n");
        exit(1);
    }
    else{
        printf("arquivo criado");
    }

    return 0;
}