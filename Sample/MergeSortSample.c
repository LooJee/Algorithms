/*************************************************************************
	> File Name: MergeSortSample
	> Author: Jerry Lu
	> Mail: mynameislujie1992@gmail.com
	> Created Time: 16/3/15
 ************************************************************************/

#include "../src/merge_sort.h"

int main(int argc, char **argv)
{
    int *array = NULL;
    int *tmparray = NULL;
    int n = 0;

    n = Input(&array);
    tmparray = (int *)malloc(sizeof(int) * n);
    if (tmparray == NULL)
    {
        printf("malloc temp array failed\n");
        return 0;
    }

    Display(array, n);
    MergeSort(array, tmparray, 0, n-1);
    Display(array, n);
    free(array);

    return 0;
}
