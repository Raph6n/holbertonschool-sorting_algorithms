#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - fction switch element
 * @array: var tab
 * @size: var
 */


void bubble_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;

size_t count_1, count_2;
int transfert;

for (count_1 = 0; count_1 < size - 1; count_1++)
{
for (count_2 = 0; count_2 < size - count_1 - 1; count_2++)
{
if (array[count_2] > array[count_2 + 1])
{
transfert = array[count_2];
array[count_2] = array[count_2 + 1];
array[count_2 + 1] = transfert;
}
}
}
}
