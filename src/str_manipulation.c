#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

#include "str_manipulation.h"

int codGenerator(char str[]){
    int sizeStr = strlen(str);

    int map[sizeStr]; memset(map, 0, sizeof(map));
    for(int i = 0; i < sizeStr; i++){
        map[i] = str[i];
    }

    int cod = codConverter(map, sizeStr);
    
    return cod;
}//END function

int codConverter(int map[], int sizeMap){
    int num = 0;
    for(int i = 0; i < sizeMap; i++){
        num *= 3;
        num += map[i];
    }

    return num;
}//END funtion

void strLower(char str[]){
    for(int i = 0; i < strlen(str); i++)
        str[i] = tolower(str[i]);
}//END function

void strTratament(char str[]){
    int sizeStr = strlen(str);

    unsigned char c;
    for(int i = 0; i < sizeStr; i++){
        c = str[i];
        if(checkTableInternal(c) == false){
            str[i] = 0;
        }
    }
}//END function

bool checkTableInternal(unsigned char character){
    if(character >= 33 && character <= 64)
        return false;
    else
        return true;
}//END funtion