#include <stdio.h>
#include <stdlib.h> // Include this for malloc and realloc
#include "task2.h"

array_list *array_list_new(size_t cap){
    // allocate space for the array list
    array_list *list = (array_list *) malloc (sizeof(array_list));

    // error handling
    if (list == NULL){
        fprintf(stderr, "Error: Allocating memory for array.");
        return NULL;
    }

    // allocate space for elements of array list
    list->elements = (char **)malloc(cap * sizeof(char *));
    
    // error handling
    if (list->elements == NULL){
        fprintf(stderr, "Error: Allocating memory for array elements.");
        return NULL;
    }

    // set capacity
    list->capacity = cap;
    
    //set length of array
    list->length = 0;

    // return it
    return list;
}

void array_list_add_to_end(array_list *list, char *input){
    // list and input error handling
    if (list == NULL || input == NULL){
        fprintf(stderr, "Error: Invalid list or input.");
        return;
    }

    // reallocate array to be able to hold the additional element
    char **temp = (char **)realloc(list->elements, sizeof(char *) * (list->capacity + 1));

    // reallocation error handling
    if (temp == NULL){
        fprintf(stderr, "Error: Reallocating memory for new array list.");
        return;
    }

    // add input to elements array now that the list has been reallocated
    list->elements = temp;
    list->elements[list->length] = input;

    // increase capacity and length to reflect the change
    list->capacity++;
    list->length++;
}