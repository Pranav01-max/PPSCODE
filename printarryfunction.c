#include <stdio.h>

void printArray(int arr[], int size);

int main()
{
    int a[5] = {5, 5, 4, 7, 2};
    int b[10] = {5, 5, 8, 8, 6, 8, 5, 4, 8, 1};

    printArray(a, 5);
    printf("\n");
    printArray(b, 10);

    return 0;
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0