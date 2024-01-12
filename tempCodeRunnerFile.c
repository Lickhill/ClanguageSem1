#include <stdio.h>
int main()
{
    float basic_sal, gross_sal, hra, da;

    printf("Enter the basic salary: ");
    scanf("%f", &basic_sal);

    if (basic_sal <= 10000)
    {
        hra = 0.18 * basic_sal;
        da = 0.75 * basic_sal;
    }
    else if (basic_sal <= 20000)
    {
        hra = 0.22 * basic_sal;
        da = 0.85 * basic_sal;
    }
    else
    {
        hra = 0.30 * basic_sal;
        da = 0.95 * basic_sal;
    }

    gross_sal = basic_sal + hra + da;

    printf("Gross Salary: %.2f\n", gross_sal);
    return 0;
}
