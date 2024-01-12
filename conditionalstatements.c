#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    // int x, y;
    // printf("Enter the value of x and y");
    // scanf("%d%d", &x, &y);
    // if (x > y)
    // {
    //     printf("\nx=%d is greater than y=%d", x, y);
    //     exit(0);
    // }
    // printf("\ny=%d is greater than x=%d", y, x);

    // int num;
    // printf("\nEnter a number");
    // scanf("%d", &num);
    // if (num % 2 == 0)
    // {
    //     printf("\nThe entered number is even");
    // }
    // else
    // {
    //     printf("\nthe Entered number is odd");
    // }

    // int x, y, z;
    // printf("Enter the value of x and y and z");
    // scanf("%d%d%d", &x, &y, &z);
    // if (x > y)
    // {
    //     if (x > z)
    //     {
    //         printf("X is the greatest");
    //     }
    //     else
    //     {
    //         printf("Z is the greatest");
    //     }
    // }
    // else if (y > z)
    // {
    //     printf("Y is the greatest");
    // }
    // else
    // {
    //     printf("Z is the greatest");
    // }

    // int grade;
    // printf("Enter the grade");
    // scanf("%d", &grade);
    // if (grade >= 90)
    // {
    //     printf("excellent");
    // }
    // else if (grade < 90 && grade >= 80)
    // {
    //     printf("very good");
    // }
    // else if (grade < 80 && grade >= 70)
    // {
    //     printf("good");
    // }
    // else
    // {
    //     printf("die");
    // }

    // int n = 2;
    // switch (n + 2)
    // {
    // case 1:
    //     printf("Case 1: value is %d", n);
    //     break;
    // case 2:
    //     printf("Case 2: value is %d", n);
    //     break;
    // case 3:
    //     printf("Case 3: value is %d", n);
    //     break;

    // default:
    //     printf("default: value is %d", n);

    //     break;
    // }

    // printf("\n");
    // char ch = 'z';
    // switch (ch)
    // {
    // case 'a':
    //     printf("case a");
    //     break;

    // case 'b':
    //     printf("case b");
    //     break;
    // case 'c':
    //     printf("case c");
    //     break;
    // case 'd':
    //     printf("case d");
    //     break;

    // default:
    //     printf("default");
    //     break;
    // }

    // char str[1000];
    // int count = 0;
    // printf("\nEnter a string\n");
    // scanf("%99s", &str);
    // printf("\nThe vowels preset are:");
    // for (int i = 0; str[i] != '\0'; i++)
    // {
    //     char ch = str[i];
    //     switch (ch)
    //     {
    //     case 'a':
    //         printf("%c, ", ch);
    //         break;
    //     case 'e':
    //         printf("%c, ", ch);
    //         break;
    //     case 'i':
    //         printf("%c, ", ch);
    //         break;
    //     case 'o':
    //         printf("%c, ", ch);
    //         break;
    //     case 'u':
    //         printf("%c, ", ch);
    //         break;
    //     default:
    //         count++;
    //     }
    // }
    // if (strlen(str) == count)
    // {
    //     printf("No vowels found");
    // }

    // char str[1000];
    // printf("\nEnter a string\n");
    // scanf("%s", &str);

    // for (int i = 0; str[i] != '\0'; i++)
    // {
    //     if (islower(str[i]))
    //         str[i] = toupper(str[i]);
    //     else
    //         str[i] = tolower(str[i]);
    // }
    // printf("%s", str);

    char name[100];
    printf("\nenter the name");
    scanf("%s", &name);
    char father[100] = "sandip";
    int grade = 96;
    char gra = 'a';
    printf("\nMy name is %s", name);
    printf("\nMy father's name is %s", father);
    printf("\nMy grade is %d", grade);
    printf("\nMy gra is %c", gra);

    return 0;
}