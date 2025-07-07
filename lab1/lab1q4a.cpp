#include <stdio.h>

struct Person {
    char name[50];
    int age;
    float membership;
};

int main() {
    struct Person people[5];

    printf("Enter name and age of 5 persons:\n");

    for (int i = 0; i < 5; i++) {
        printf("\nPerson %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", people[i].name);
        printf("Age: ");
        scanf("%d", &people[i].age);

        if (people[i].age <= 20) {
            people[i].membership = 1.0;
        } else if (people[i].age > 20 && people[i].age <= 30) {
            people[i].membership = (30.0 - people[i].age) / 10.0;
        } else {
            people[i].membership = 0.0;
        }
    }

    printf("\nDegree of Membership:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s, Age: %d, Membership Degree: %.2f\n",
               people[i].name, people[i].age, people[i].membership);
    }

    return 0;
}

