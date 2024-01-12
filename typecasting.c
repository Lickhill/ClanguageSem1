#include <stdio.h>
int main()
{
    char ch = 'a';
    int b = 80;
    float d = 5.6;
    printf("%f", ch + b + d);

    char c = '9';
    int chamar = (int)c; // now chamar is 9+48 since '0' is 48 ascii value
    printf("\n%d", chamar + 81);

    double x = 5.6;
    double y = 5.6;
    double z = 5.8;
    double res = x + y + z;
    printf("\n%lf", res);
    printf("\n%d", (int)res + 3);
    int result = (int)x + (int)y + (int)z; // double is 5.6 or5.999 then its explicit int is 5
    printf("\n%d", result);
    printf("\n%lf", (x + y + z));
    printf("\n%d", (int)(x + y + z));

    return 0;
}