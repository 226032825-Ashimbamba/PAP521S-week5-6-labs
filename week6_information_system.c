#include <stdio.h>
#include <string.h>

#define NUM_SALARIES 50
#define NUM_BUDGETS 10
#define NUM_VEHICLES 20

int main()
{
    /* ---------- PART A: EMPLOYEE SALARIES ---------- */
    float salaries[NUM_SALARIES];
    float total = 0;
    float average;
    float highest;
    float lowest;
    float searchSalary;
    int found = 0;

    printf("===== PART A: EMPLOYEE SALARIES =====\n");
    for (int i = 0; i < NUM_SALARIES; i++)
    {
        printf("Enter salary %d: ", i + 1);
        scanf("%f", &salaries[i]);
    }

    printf("\nEmployee Salaries\n");
    for (int i = 0; i < NUM_SALARIES; i++)
    {
        printf("%d. %.2f\n", i + 1, salaries[i]);
    }

    highest = salaries[0];
    lowest = salaries[0];
    for (int i = 0; i < NUM_SALARIES; i++)
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
    average = total / NUM_SALARIES;

    printf("\nAverage salary: %.2f\n", average);
    printf("Highest salary: %.2f\n", highest);
    printf("Lowest salary:  %.2f\n", lowest);

    printf("\nEnter a salary to search for: ");
    scanf("%f", &searchSalary);
    for (int i = 0; i < NUM_SALARIES; i++)
    {
        if (salaries[i] == searchSalary)
        {
            found = 1;
            printf("Salary found at position %d\n", i + 1);
            break;
        }
    }
    if (!found)
    {
        printf("Salary not found.\n");
    }

    /* ---------- PART B: DEPARTMENT BUDGETS ---------- */
    float budgets[NUM_BUDGETS];
    float budgetTotal = 0;
    float budgetAverage;
    float temp;

    printf("\n===== PART B: DEPARTMENT BUDGETS =====\n");
    for (int i = 0; i < NUM_BUDGETS; i++)
    {
        printf("Enter budget for department %d: ", i + 1);
        scanf("%f", &budgets[i]);
    }

    printf("\nDepartment Budgets\n");
    for (int i = 0; i < NUM_BUDGETS; i++)
    {
        printf("Department %d: %.2f\n", i + 1, budgets[i]);
        budgetTotal = budgetTotal + budgets[i];
    }
    budgetAverage = budgetTotal / NUM_BUDGETS;

    printf("\nTotal budget:   %.2f\n", budgetTotal);
    printf("Average budget: %.2f\n", budgetAverage);

    /* bubble sort, lowest to highest */
    for (int i = 0; i < NUM_BUDGETS - 1; i++)
    {
        for (int j = 0; j < NUM_BUDGETS - i - 1; j++)
        {
            if (budgets[j] > budgets[j + 1])
            {
                temp = budgets[j];
                budgets[j] = budgets[j + 1];
                budgets[j + 1] = temp;
            }
        }
    }

    printf("\nBudgets sorted (lowest to highest):\n");
    for (int i = 0; i < NUM_BUDGETS; i++)
    {
        printf("%.2f\n", budgets[i]);
    }

    /* ---------- PART C: VEHICLE REGISTRATIONS ---------- */
    char registrations[NUM_VEHICLES][20];
    char searchReg[20];
    int regFound = 0;

    printf("\n===== PART C: VEHICLE REGISTRATIONS =====\n");
    for (int i = 0; i < NUM_VEHICLES; i++)
    {
        printf("Enter vehicle registration %d: ", i + 1);
        scanf("%19s", registrations[i]);
    }

    printf("\nVehicle Registrations\n");
    for (int i = 0; i < NUM_VEHICLES; i++)
    {
        printf("%d. %s\n", i + 1, registrations[i]);
    }

    printf("\nEnter a registration number to search for: ");
    scanf("%19s", searchReg);
    for (int i = 0; i < NUM_VEHICLES; i++)
    {
        if (strcmp(registrations[i], searchReg) == 0)
        {
            regFound = 1;
            printf("Registration found at position %d\n", i + 1);
            break;
        }
    }
    if (!regFound)
    {
        printf("Registration not found.\n");
    }

    return 0;
}
