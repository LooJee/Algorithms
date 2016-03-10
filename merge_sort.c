/*************************************************************************
	> File Name: merge_sort.c
	> Author: Jerry Lu
	> Mail: mynameislujie1992@gmail.com
	> Created Time: 三  3/ 9 09:35:53 2016
 ************************************************************************/

#include <stdio.h>
#include "utility.h"

void Sort(int a[], int *b, int s, int m, int e)
{
    int l = s, r = m+1, t = s;

    while (l < m+1 && r < e+1)
        b[t++] = a[l] < a[r] ? a[l++] : a[r++];
    while (l < m+1)
        b[t++] = a[l++];

    while (r < e+1)
        b[t++] = a[r++];

    for (int i = s; i < e+1; ++i)
        a[i] = b[i];
}

void MergeSort(int a[], int *b, int s, int e)
{
    if (e <= s)
        return;

    int m = (s+e)/2;
    MergeSort(a, b, s, m);
    MergeSort(a, b, m+1, e);
    Sort(a, b, s, m, e);
}

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
