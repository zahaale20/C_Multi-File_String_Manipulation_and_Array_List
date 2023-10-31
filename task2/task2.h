#include <stdio.h>

#ifndef TASK2_H
#define TASK2_H

struct array_list {
    char **elements;
    size_t capacity;
    size_t length;
};

typedef struct array_list array_list; // Add this line to create a typedef for the struct

array_list *array_list_new(size_t cap);
void array_list_add_to_end(array_list *list, char *input);

#endif