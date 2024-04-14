#include "sort.h"
/**
 * quick_sort_util - delimits the part of the table to be sorted
 * @tab: the array
 * @low: the lower integer
 * @high: the higher integer
*/
void quick_sort_util(int *tab, int low, int high);

/**
 * lomuto - place all int below the pivot to its left and all above to its righ
 * @tab: the array
 * @low: the lower integer
 * @high: the higher integer
 * Return: i
*/
int lomuto(int *tab, int low, int high);

/**
 * quick_sort - function that sorts an array of integers
 * @array: array
 * @size: size
*/
void quick_sort(int *array, size_t size)
{
	if (array != NULL || size < 2)
	{
		return;
	}
	quick_sort_util(array, 0, size - 1);
}

/**
 * quick_sort_util - delimits the part of the table to be sorted
 * @tab: the array
 * @low: the lower integer
 * @high: the higher integer
*/

void quick_sort_util(int *tab, int low, int high)
{
	int l;

	if (low < high)
	{
		l = lomuto(tab, low, high);
		quick_sort_util(tab, low, l - 1);
		quick_sort_util(tab, l + 1, high);
	}
}

/**
 * lomuto - place all int below the pivot to its left and all above to its righ
 * @tab: the array
 * @low: the lower integer
 * @high: the higher integer
 * @size: size
 * Return: i
*/

int lomuto(int *tab, int low, int high)
{
	int i = 0, j = 0, rota = 0, temp = 0;

	rota = tab[high];
	i = low;

	for (j = low; j < high; j++)
	{
		if (tab[j] < rota)
		{
			temp = tab[i];
			tab[i] = tab[j];
			tab[j] = temp;
			i++;
		}
	}
	temp = tab[i];
	tab[i] = tab[high];
	tab[high] = temp;

	return (i);
}
