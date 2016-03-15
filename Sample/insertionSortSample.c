/*************************************************************************
	> File Name: insertionSortSample
	> Author: Jerry Lu
	> Mail: mynameislujie1992@gmail.com
	> Created Time: 16/3/15
 ************************************************************************/

#include "insertion_sort.h"
#include "utility.h"

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

