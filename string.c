#include <stdio.h>
#include <string.h>
int main()
{
    char string[100] = {'d', 'e', 'a', 't', 'h', ' ', '\0'};
    printf("%s", string);
    printf("%d", sizeof(string));

    int size = 0;
    while (string[size] != '\0')
    {
        size++;
    }
    printf("\nsize is %d", size);

    char s2[] = "is inevitable";

    for (int j = 0; s2[j] != '\0'; size++)
    {
        string[size] = s2[j];
        j++;
    }
    printf("\nnew string is %s", string);
}
