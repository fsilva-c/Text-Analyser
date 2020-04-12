#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

#include "str_manipulation.h"

int codGenerator(char str[]){
    int sizeStr = strlen(str);

    register unsigned char unsChar;

    int map[sizeStr]; memset(map, 0, sizeof(map));
    for(register int i = 0; i < sizeStr; i++){
        unsChar = str[i];
        map[i] = unsChar;
    }

    int cod = codConverter(map, sizeStr);
    
    return cod;
}//END function

int codConverter(int map[], int sizeMap){
    register int num = 0;
    for(register int i = 0; i < sizeMap; i++){
        num *= 10;
        num += map[i];
    }

    return num;
}//END funtion

void strLower(char str[]){
    for(register int i = 0; i < strlen(str); i++)
        str[i] = tolower(str[i]);
}//END function

void strTratament(char str[]){
    int sizeStr = strlen(str);

    register unsigned char c;
    for(register int i = 0; i < sizeStr; i++){
        c = str[i];
        if(checkTableInternal(c) == false){
            str[i] = 0;
        }
    }
}//END function

bool checkTableInternal(unsigned char character){
    if(character >= 33 && character <= 44 || character >= 46 && character <= 64)
        return false;
    else
        return true;
}//END funtion