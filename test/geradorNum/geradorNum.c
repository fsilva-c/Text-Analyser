#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int codGenerator(char str[]);

int main(){
    int cod_0 = codGenerator("abacate");
    int cod_1 = codGenerator("chevrolet");

    printf("Codigo gerado a partir da soma dos caracteres contigos nas strings = [%d] [%d]\n", cod_0, cod_1);

    return 0;
}//END main

int codGenerator(char str[]){
    int sizeStr = strlen(str);
    int counter = 0;

    for(int i = 0; i < sizeStr; i++){
        counter += str[i];
    }

    return counter;
}