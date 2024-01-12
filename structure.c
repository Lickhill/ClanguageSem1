#include <stdio.h>
#include <string.h>
struct details
{
    int age;
    char name[79];
    float marks;
};

// void functionToPrint(struct details person)
// {
//     printf("age is: %d\n", person.age);
//     printf("name is: %s\n", person.name);
//     printf("marks are: %f\n", person.marks);
// }

// int main()
// {
//     printf("Enter the details:\n");
//     struct details person;
//     scanf("%d", &person.age);
//     scanf("%s", &person.name);
//     scanf("%f", &person.marks);
//     functionToPrint(person);
// }

struct details person; // global  declaration of structure
void functionToPrint()
{
    printf("age is: %d\n", person.age);
    printf("name is: %s\n", person.name);
    printf("marks are: %f\n", person.marks);
}

int main()
{
    printf("Enter the details:\n");
    scanf("%d", &person.age);
    scanf("%s", &person.name);
    scanf("%f", &person.marks);
    functionToPrint(person);
}