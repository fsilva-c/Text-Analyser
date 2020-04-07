#include <stdio.h>
#include <stdlib.h>

void wordsArchive();

int main(){

    wordsArchive();

    return 0;
}// END main

void wordsArchive(){
    FILE *pArchive = fopen("test.txt", "r");
    if(pArchive == NULL) exit(EXIT_FAILURE);

    char word[20];

    while(fscanf(pArchive, "%s", word) != EOF){
        printf("[%s]\n", word);
    }

    fclose(pArchive);
}