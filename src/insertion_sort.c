/*************************************************************************
	> File Name: insertion_sort.c
	> Author: Jerry Lu
	> Mail: mynameislujie1992@gmail.com
	> Created Time: 五  3/ 4 09:26:47 2016
 ************************************************************************/

#include "insertion_sort.h"

void InsertionSort(int *a, int n)
{
    for (int i = 1; i < n; ++i)
    {
        int key = a[i];
        for (int j = i - 1; j >= 0; --j)
        {
            if (a[j] > key)
            {
                a[j + 1] = a[j];
                a[j] = key;
            }
        }
    }
}


