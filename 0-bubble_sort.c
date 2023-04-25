#include "sort.h"
void swap(int *a, int *b);
/**
  *bubble_sort - sorts an array of intergers in ascending order using a bubbl
  *sorting algorithme
  *@array: array of intergers to be sorted
  *@size: amount of element in array
  */
void bubble_sort(int *array, size_t size)
{
        unsigned int i = 0, j = 0;

        if (size <= 1)
                return;

        for (i=0; i < (size - 1); i++)
                for (j = 1; j < size; j++)
                        if (array[j - 1] > array[j])
                        {
                                swap(&array[j - 1], &array[j]);
                                print_array(array, size);
                        }
}

/**
  *swap - swap two pointers to integer
  *
  *@a: first int pointer
  @b: second int pointer
  */
void swap(int *a, int *b)
{
        int swap;

        swap = *a;
        *a = *b;
        *b = swap;
}
