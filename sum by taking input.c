#include<stdio.h>
int main()
{
    int n1, n2, sum; 
    printf("Enter First Number");
    scanf("%d", &n1);
    printf("Enter Second Number");
    scanf("%d", &n2);
    sum = n1 + n2;  
    printf("The Sum Of %d and %d is %d", n1, n2, sum); 
    return 0;
}