#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
int compareAsc(const void *a, const void *b)
{
    return(*(int*)a - *(int*)b);
}
int compareDesc(const void *a, const void *b)
{
    return(*(int*)b - *(int*)a);
}
void sortArray(int arr[], int n)
{
    int mid=n/2;
    qsort(arr,mid,sizeof(int), compareAsc);
    qsort(arr + mid, n - mid, sizeof(int), compareDesc);
}
int main()
{
    int arr[] = {12, 7, 14, 9, 5, 3, 11, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortArray(arr, n);
    printf("Sorted array");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
