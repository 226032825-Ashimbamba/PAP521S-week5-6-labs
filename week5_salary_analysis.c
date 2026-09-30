#include <stdio.h>

#define NUM_EMPLOYEES 50

int main()
{
    float salary;
    float total = 0;
    float average;
    float highest = 0;
    float lowest = 0;

    for (int i = 1; i <= NUM_EMPLOYEES; i++)
    {
        printf("Enter salary for employee %d: ", i);
        scanf("%f", &salary);

        total = total + salary;

        /* first salary initialises both highest and lowest */
        if (i == 1)
        {
            highest = salary;
            lowest = salary;
        }

        if (salary > highest)
        {
            highest = salary;
        }

        if (salary < lowest)
        {
            lowest = salary;
        }
    }

    average = total / NUM_EMPLOYEES;

    printf("\n--- Salary Report ---\n");
    printf("Total salary:   %.2f\n", total);
    printf("Average salary: %.2f\n", average);
    printf("Highest salary: %.2f\n", highest);
    printf("Lowest salary:  %.2f\n", lowest);

    return 0;
}
