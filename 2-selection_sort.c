#include "sort.h"

/**
 * selection_sort - array in ascending order
 * @array: array
 * @size: number of element
 */

void selection_sort(int *array, size_t size)
{
size_t count_1, count_2, min;
int transfert;

if (array == NULL || size < 2)
return;

for (count_1 = 0; count_1 < size - 1; count_1++)
{
min = count_1;
for (count_2 = count_1 + 1; count_2 < size; count_2++)
{
if (array[count_2] < array[min])
min = count_2;
}
if (min != count_1)
{
transfert = array[count_1];
array[count_1] = array[min];
array[min] = transfert;
print_array(array, size);
}
}
}
