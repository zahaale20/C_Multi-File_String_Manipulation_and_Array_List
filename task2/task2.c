#include <stdio.h>

struct array_list {
    char **elements;
    size_t capacity;
    size_t length;
}

array_list *array_list_new(size_t cap){
    array_list *list = (array_list *) malloc (sizeof(array_list));
    if (list == NULL){
        fprintf(stderr, "Error: Allocating memory for array.");
        return NULL;
    }

    list->elements = (char **)malloc(cap * sizeof(char *));
    if (list->elements == NULL){
        fprintf("Error: Allocating memory for array elements.");
        return NULL;
    }

    list->capacity = cap
    
    list->length = 0;

    return list;
}

void array_list_add_to_end(array_list * list, const char *input){
    // list error handling
    if (list == NULL){
        fprintf(stderror, "Error: Locating array.");
        return NULL;
    }

    // input error handling
    if (input == NULL){
        fprintf(stderror, "Error: Locating string to add to end of array list.");
        return NULL;
    }

    // reallocate array to be able to hold the additional element
    char **temp = (char **)realloc(list->elements, sizeof(char *) * (list->capacity + 1));

    // reallocation error handling
    if (list == NULL){
        fprintf(stderror, "Error: Reallocation memory for new array list.");
        return NULL;
    }

    // add input to elements array now that the list has been reallocated
    list->elements = temp;
    list->elements[list->length] = input;

    // increase capacity and length to reflect the change
    list->capacity++;
    list->length++;

}