#include <stdio.h>

#define NUM_EMPLOYEES 50

int main()
{
    float salaries[NUM_EMPLOYEES];
    float total = 0;
    float average;
    float highest;
    float lowest;
    float searchSalary;
    float temp;
    int found = 0;

    /* 1 & 2. Capture and store salaries */
    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%f", &salaries[i]);
    }

    /* 3. Display all salaries */
    printf("\nAll Salaries\n");
    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        printf("Employee %d: %.2f\n", i + 1, salaries[i]);
    }

    /* 4-7. Total, average, highest, lowest */
    highest = salaries[0];
    lowest = salaries[0];
    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        total = total + salaries[i];
        if (salaries[i] > highest)
        {
            highest = salaries[i];
        }
        if (salaries[i] < lowest)
        {
            lowest = salaries[i];
        }
    }
    average = total / NUM_EMPLOYEES;

    printf("\n--- Salary Report ---\n");
    printf("Total salary expenditure: %.2f\n", total);
    printf("Average salary:           %.2f\n", average);
    printf("Highest salary:           %.2f\n", highest);
    printf("Lowest salary:            %.2f\n", lowest);

    /* 8. Search */
    printf("\nEnter a salary to search for: ");
    scanf("%f", &searchSalary);
    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        if (salaries[i] == searchSalary)
        {
            found = 1;
            printf("Salary found for employee %d\n", i + 1);
            break;
        }
    }
    if (!found)
    {
        printf("Salary not found.\n");
    }

    /* 9. Bubble sort, lowest to highest */
    for (int i = 0; i < NUM_EMPLOYEES - 1; i++)
    {
        for (int j = 0; j < NUM_EMPLOYEES - i - 1; j++)
        {
            if (salaries[j] > salaries[j + 1])
            {
                temp = salaries[j];
                salaries[j] = salaries[j + 1];
                salaries[j + 1] = temp;
            }
        }
    }

    /* 10. Display sorted salaries */
    printf("\nSalaries Sorted (lowest to highest)\n");
    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        printf("%.2f\n", salaries[i]);
    }

    return 0;
}
