/*************************************************************************
	> File Name: insertion_sort.c
	> Author: Jerry Lu
	> Mail: mynameislujie1992@gmail.com
	> Created Time: 五  3/ 4 09:26:47 2016
 ************************************************************************/

#include <stdio.h>
#include "utility.h"

void InsertionSort(int *a, int n);

int main(int argc, char **argv)
{
    int *array = NULL;
    int n = 0;

    n = Input(&array);
    Display(array, n);
    InsertionSort(array, n);
    Display(array, n);
    free(array);

    return 0;
}

