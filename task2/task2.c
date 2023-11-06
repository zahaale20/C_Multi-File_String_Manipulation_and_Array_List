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
    list -> elements = (char **)malloc(cap * sizeof(char *));
    
    // error handling
    if (list -> elements == NULL){
        fprintf(stderr, "Error: Allocating memory for array elements.");
        return NULL;
    }

    // set capacity
    list -> capacity = cap;
    
    //set length of array
    list -> length = 0;

    // return it
    return list;
}


void array_list_add_to_end(array_list *list, char *input) {
    // error handling
    if (list == NULL || input == NULL) {
        fprintf(stderr, "Error: Invalid list or input.");
        return;
    }

    // If the length is equal to or greater than the capacity, reallocate memory by doubling capacity
    if (list->length >= list->capacity) {
        list->capacity = (list->capacity == 0) ? 1 : list->capacity * 2;

        char **temp = (char **)realloc(list->elements, sizeof(char *) * list->capacity);

        if (temp == NULL) {
            fprintf(stderr, "Error: Reallocating memory for new array list.");
            return;
        }

        list->elements = temp;
    }

    // Add the input to the array and increase the length.
    list->elements[list->length] = input;
    list->length++;
}