/* Name:pranav bibhishan khandekar 
PRN:24030331378010
tittle:ramesh salary  
Date:
  */
 #include <stdio.h>

int main()
{
    float basic_salary, da, hra, gross_salary;

    printf("Enter Ramesh's basic Salary: ");
    scanf("%f", &basic_salary);

    da = 0.40 * basic_salary;
    hra = 0.20 * basic_salary;

    gross_salary = basic_salary + da + hra;

    printf("Ramesh's Gross Salary is: %.2f\n", gross_salary);

    return 0;
}
