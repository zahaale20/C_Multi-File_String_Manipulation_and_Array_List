#include "task1.h"
#include <stdio.h>
#include <ctype.h>

// copy and modify characters of an existing string to the output buffer
void str_lower(char *input, char *output){
    size_t i;
    for(i = 0; input[i] != '\0'; i++){
        output[i] = tolower(input[i]);
    }
    output[i] = '\0';
}


// modify characters in place (in the same string)
void str_lower_mutate(char *input){
    size_t i;
    for(i = 0; input[i] != '\0'; i++){
        input[i] = tolower(input[i]);
    }
}