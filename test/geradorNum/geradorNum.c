#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int codGenerator(char str[]);

int main(){
    int cod_0 = codGenerator("aacs");
    int cod_1 = codGenerator("aasc");
    int cod_2 = codGenerator("acas");
    int cod_3 = codGenerator("acsa");
    int cod_4 = codGenerator("asac");
    int cod_5 = codGenerator("asca");
    int cod_6 = codGenerator("caas");
    int cod_7 = codGenerator("casa");
    int cod_8 = codGenerator("csaa");
    int cod_9 = codGenerator("saac");
    int cod_10 = codGenerator("saca");
    int cod_11 = codGenerator("scaa");

    printf("[%d] [%d] [%d] [%d] [%d] [%d] [%d] [%d] [%d] [%d] [%d] [%d]\n", cod_0, cod_1, cod_2, cod_3, cod_4, cod_5, cod_6, cod_7, cod_8, cod_9, cod_10, cod_11);

    return 0;
}//END main

int codGenerator(char str[]){
    int sizeStr = strlen(str);

    int map[sizeStr];
    int character;
    for(int i = 0; i < sizeStr; i++){
        map[i] = str[i];
    }

    int number = 0;
    for (int i = sizeStr; i > 0; i--){
        number += 10 * i * map[sizeStr - i];
    }
    
    return number;
}