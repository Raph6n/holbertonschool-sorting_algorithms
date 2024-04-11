#ifndef BIG_O
#define BIG_O

#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void print_list(const listint_t *list);
oid print_array(const int *array, size_t size);

typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

#endif
