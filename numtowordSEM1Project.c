#include <stdio.h>
#include <string.h>

int num;
char f[10000]; // Assuming a maximum of 10000 characters for the result

int n[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
char word[][10] = {"", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE", "TEN", "ELEVEN",
                   "TWELVE", "THIRTEEN", "FOURTEEN", "FIFTEEN", "SIXTEEN", "SEVENTEEN", "EIGHTEEN", "NINETEEN", "TWENTY"};

int m[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
char wrd[][10] = {"TEN ", "TWENTY", "THIRTY", "FORTY", "FIFTY", "SIXTY", "SEVENTY", "EIGHTY", "NINETY"};

void onedigit(int x)
{
    if (x > 0 && x < 21)
    {
        for (int i = 0; i < sizeof(n) / sizeof(n[0]); i++)
        {
            if (x == n[i])
            {
                strcat(f, word[i]);
                strcat(f, " ");
            }
        }
    }
}

void twodigit(int p)
{
    if (p > 20 && p < 100)
    {
        int d = p % 10;
        p = p / 10;
        p = p * 10;
        num = d;
        for (int j = 0; j < sizeof(m) / sizeof(m[0]); j++)
        {
            if (p == m[j])
            {
                strcat(f, wrd[j]);
                strcat(f, " ");
                break;
            }
        }
    }
}

void threedigit(int r)
{
    if (r > 99 && r <= 999)
    {
        int e = r / 100;
        num = r % 100;
        r = r / 100;
        for (int k = 0; k < sizeof(n) / sizeof(n[0]); k++)
        {
            if (e == n[k])
            {
                strcat(f, word[k]);
                strcat(f, " HUNDRED ");
            }
        }
    }
}

void fourdigit(int s)
{
    if (s > 999 && s <= 20000)
    {
        int g = s / 1000;
        onedigit(g);
        strcat(f, " THOUSAND ");
    }
    else if (s >= 20000 && s < 100000)
    {
        int g = s / 1000;
        twodigit(g);
        onedigit(g % 10);
        strcat(f, "THOUSAND ");
    }
    num = s % 1000;
}

void lakhdigit(int t)
{
    if (t > 99999 && t <= 2000000)
    {
        int h = t / 100000;
        onedigit(h);
        strcat(f, " LAKH ");
    }
    else if (t >= 2000000 && t < 10000000)
    {
        int h = t / 100000;
        twodigit(h);
        onedigit(h % 10);
        strcat(f, " LAKH ");
    }
    num = t % 100000;
}

void croredigit(int u)
{
    if (u > 9999999 && u <= 200000000)
    {
        int z = u / 10000000;
        onedigit(z);
        strcat(f, " CRORE ");
    }
    else if (u >= 200000000 && u < 1000000000)
    {
        int z = u / 10000000;
        twodigit(z);
        onedigit(z % 10);
        strcat(f, " CRORE ");
    }
    num = u % 10000000;
}

void display()
{
    croredigit(num);
    lakhdigit(num);
    fourdigit(num);
    threedigit(num);
    twodigit(num);
    onedigit(num);
    printf("%s", f);
}

int main()
{
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("ZERO");
        return 0;
    }
    if (num >= 0 && num <= 20)
    {
        onedigit(num);
        printf("%s\n", f);
        return 0;
    }

    display();

    return 0;
}
