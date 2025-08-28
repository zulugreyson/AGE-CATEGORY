#include <stdio.h>

void categorizeAge() {
    int age; // variable to store the user's age

    // prompt the user to enter their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // categorize the age using if-else statements
    if (Age < 13) {
        printf("You are a child!\n");
    } else if (Age >= 13  && age <= 19) {
        printf("You are a teenager!\n");
    } else {
       printf("You are an adult!\n");

    }
}

int main() {
    categorizeAge();
    return 0;

}
