/*************************************************************************
	> File Name: insertion_sort.c
	> Author: Jerry Lu
	> Mail: mynameislujie1992@gmail.com
	> Created Time: 五  3/ 4 09:26:47 2016
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *CreateNewArray(int n);
int Input(int **a);
void Display(int *a, int n);
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

int Input(int **a)
{
    int n = 0;
    int i = 0;
    int data = 0;
    
    printf("how many numbers do you want to sort?");
    scanf("%d", &n);
    printf("now type in the numbers:");
    *a = CreateNewArray(n);
    
    while(scanf("%d", &data) != EOF)
    {
        (*a)[i++] = data;
        if (i > n-1)
        {
            printf("array is FULL!\n");
            break;
        }
    }

    return n;
}

int *CreateNewArray(int n)
{
    int *a;
    a = (int *)malloc(n * sizeof(int));
    if (NULL == a)
    {
        printf("mallloc array failed\n");
        return NULL;
    }
    memset(a, 0, n);

    return a;
}

void Display(int *a, int n)
{
    int i = 0;
    for (i = 0; i < n; ++i)
    {
        printf("%d ", *(a+i));
    }
    printf("\n");
}

