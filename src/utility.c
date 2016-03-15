/*************************************************************************
	> File Name: utility.c
	> Author: Jerry Lu
	> Mail: mynameislujie1992@gmail.com
	> Created Time: 三  3/ 9 09:30:36 2016
 ************************************************************************/

#include "utility.h"

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

