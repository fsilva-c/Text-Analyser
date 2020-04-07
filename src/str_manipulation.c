#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "str_manipulation.h"

int codGenerator(char str[]){
    int sizeStr = strlen(str);
    int counter = 0;

    for(int i = 0; i < sizeStr; i++){
        counter += str[i];
    }

    return counter;
}//END function

void strLower(char str[]){
    for(int i = 0; i < strlen(str); i++)
        str[i] = tolower(str[i]);
}//END function

void strTratament(char str[]){
    puts("strTratament");
}