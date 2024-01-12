#include <stdio.h>
#include <string.h>

// Define a structure to represent a person
struct Person
{
    char name[50];
    int age;
};

// Function to input details of a person
void inputPerson(struct Person *person)
{
    printf("Enter name: ");
    scanf("%s", person->name);

    printf("Enter age: ");
    scanf("%d", &(person->age));
}

// Function to print details of a person
void printPerson(struct Person *person)
{
    printf("Name: %s, Age: %d\n", person->name, person->age);
}

// Function to recursively print details of an array of persons
void printPeopleRecursive(struct Person *people, int index, int size)
{
    if (index < size)
    {
        printPerson(&people[index]);
        printPeopleRecursive(people, index + 1, size);
    }
}

int main()
{
    int numberOfPeople;
    int choice;

    // Define an array of Person structures with a maximum size
    struct Person peopleArray[100];
    int i = 0;
    while (i < 3)
    {
        printf("\nMenu:\n");
        printf("1. Enter details for people\n");
        printf("2. Print details of people\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the number of people: ");
            scanf("%d", &numberOfPeople);

            // Input details for each person
            for (int i = 0; i < numberOfPeople; i++)
            {
                printf("\nEnter details for Person %d:\n", i + 1);
                inputPerson(&peopleArray[i]);
            }
            break;

        case 2:
            printf("\nDetails of the entered people:\n");

            // Print details using recursion
            printPeopleRecursive(peopleArray, 0, numberOfPeople);
            break;

        case 3:
            printf("Exiting the program.\n");
            return 0;

        default:
            printf("Invalid choice. Please enter a valid option.\n");
            break;
        }
        i++;
    }

    return 0;
}
