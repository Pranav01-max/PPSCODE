/* Name:pranav bibhishan khandekar 
PRN:24030331378010
tittle:perimeter of rectangle 
Date:
  */
 #include <stdio.h>

int main()
{
    int l, w, a, p;

    printf("Enter the l of rectangle: ");
    scanf("%d", &l);

    printf("Enter the w of rectangle: ");
    scanf("%d", &w);

    a = l * w;
    printf("\nArea of rectangle: %d", a);

    p = 2 * (l + w);
    printf("\nPerimeter of rectangle: %d", p);

    return 0;
}
