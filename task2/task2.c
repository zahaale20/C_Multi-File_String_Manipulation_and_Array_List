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