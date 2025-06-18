#include <stdio.h>

int flag = 0;

int LinearSearch(int arr[], int size, int value) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == value) {
            printf("\nThe %d is present at %d index", value, i);
            flag = 1;
        }
    }
}

int main() {
    int b[10] = {5, 5, 8, 6, 8, 5, 4, 3, 1}, find;

    printf("Enter the number to find: ");
    scanf("%d", &find);

    LinearSearch(b, 10, find);

    if (flag == 0) {
        printf("The given element is absent in array");
    }

    return 0;
}