#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    printf("ENter the vlaues of a b and c");
    scanf("%lf%lf%lf", &a, &b, &c);
    if (a != 0)
    {
        double D = (b * b) - (4 * a * c);
        double B = (-b) / (2 * a);

        double p, root1, root2;
        if (D >= 0)
        {
            p = sqrt(D) / (2 * a);
            root1 = B + p;
            root2 = B - p;
            printf("The roots are %lf and %lf", root1, root2);
        }
        else
        {
            p = sqrt(-D) / (2 * a);
            printf("The roots are %lf + %lfi and %lf - %lfi", B, p, B, p);
        }
    }
    else
    {
        printf("Not a quadratic");
    }
    return 0;
}