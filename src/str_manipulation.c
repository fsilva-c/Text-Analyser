#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

#include "str_manipulation.h"

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
}//END function

void strLower(char str[]){
    for(int i = 0; i < strlen(str); i++)
        str[i] = tolower(str[i]);
}//END function

void strTratament(char str[]){
    puts("strTratament");
}