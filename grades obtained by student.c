/* Name:pranav bibhishan khandekar 
PRN:24030331378010
tittle:grades obtained by student 
Date:
  */
#include <stdio.h>
int main() {
  int marks;
  printf("Enter obtained marks:\t");
  scanf("%d", &marks);
  printf("\n Your Grade is:\t");
  if (marks > 100 || marks < 0) {
    printf("The Entered marks are not valid.Please enter valid marks.");
  } else if (marks >= 85) {
    printf("A grade");
  } else if (marks >= 75) {
    printf("B grade");
  } else if (marks >= 65) {
    printf("C grade");
  } else if (marks >= 55) {
    printf("D grade");
  } else if (marks >= 45) {
    printf("E grade");
  } else {
    printf("Failed");
  }
  return 0;
}
