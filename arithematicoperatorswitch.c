#include <stdio.h>
int main()
{
    printf("Kartik, You have to work on:\n");
    for (int i = 10; i <= 10000; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}
