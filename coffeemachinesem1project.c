#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ITEMS 3
#define MAX_RESOURCES 3

// Define the MENU and resources
struct MenuItem
{
    char name[20];
    int ingredients[MAX_RESOURCES];
    float cost;
};

// Declare an array of MenuItem structures
struct MenuItem menu[MAX_ITEMS] = {
    {"espresso", {50, 0, 18}, 1.5},
    {"latte", {200, 150, 24}, 2.5},
    {"cappuccino", {250, 100, 24}, 3.0},
};

int resources[MAX_RESOURCES] = {300, 200, 100}; // water, milk, coffee

float cashier = 0;

void displayMenu()
{
    printf("Beverage\tCost\n");
    printf("----------------------\n");

    for (int i = 0; i < MAX_ITEMS; i++)
    {
        printf("%s\t$ %.2f\n", menu[i].name, menu[i].cost);
    }

    for (int i = 0; i < MAX_RESOURCES; i++)
    {
        printf("%s\t%d\n", (i == 0) ? "water" : (i == 1) ? "milk"
                                                         : "coffee",
               resources[i]);
    }
}

void processOrder(char *order, int penny, int quarter, int nickel, int dime)
{
    float moneysystem[] = {0.01, 0.25, 0.05, 0.1};
    float amtpaid = (penny * moneysystem[0]) + (quarter * moneysystem[1]) + (nickel * moneysystem[2]) + (dime * moneysystem[3]);

    float change = 0;

    for (int i = 0; i < MAX_ITEMS; i++)
    {
        if (strcmp(order, menu[i].name) == 0)
        {
            change = amtpaid - menu[i].cost;
            if (change < 0)
            {
                printf("Not enough money\n");
                exit(0);
            }

            for (int j = 0; j < MAX_RESOURCES; j++)
            {
                if (menu[i].ingredients[j] > resources[j])
                {
                    printf("Not enough resources. Sorry for the inconvenience.\n");
                    exit(0);
                }
                resources[j] -= menu[i].ingredients[j];
            }
        }
    }

    cashier += amtpaid - change;
    printf("Enjoy your %s\n", order);
    printf("Here is your spare change $%.2f\n", change);
}

int main()
{
    while (1)
    {
        printf("Cashier: $%.2f\n", cashier);
        char menuOption;
        printf("Do you want to see the menu? 'y' or 'n': ");
        scanf(" %c", &menuOption);

        if (menuOption == 'n')
            exit(0);

        displayMenu();

        char order[20];
        int penny, quarter, nickel, dime;

        printf("What would you like to have? ");
        scanf("%s", order);

        printf("How many pennies do you have? ");
        scanf("%d", &penny);

        printf("How many quarters do you have? ");
        scanf("%d", &quarter);

        printf("How many nickels do you have? ");
        scanf("%d", &nickel);

        printf("How many dimes do you have? ");
        scanf("%d", &dime);

        processOrder(order, penny, quarter, nickel, dime);
    }

    return 0;
}
