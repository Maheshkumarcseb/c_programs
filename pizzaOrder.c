#include <stdio.h>

void printMenu(const char *pizzaType) {
    printf("%s Pizza Menu:\n", pizzaType);
    printf("1. Only %s Pizza\n", pizzaType);
    printf("2. %s Pizza with extra toppings\n", pizzaType);
    printf("3. %s Pizza with extra chilli\n", pizzaType);
    printf("4. %s Pizza with extra pepper\n", pizzaType);
    printf("5. %s Pizza with french fries\n", pizzaType);
}

void printChoice(int extraChoice, const char *pizzaType) {
    switch (extraChoice) {
        case 1:
            printf("Only %s Pizza is ready\n", pizzaType);
            break;
        case 2:
            printf("%s Pizza with extra toppings is ready\n", pizzaType);
            break;
        case 3:
            printf("%s Pizza with extra chilli is ready\n", pizzaType);
            break;
        case 4:
            printf("%s Pizza with extra pepper is ready\n", pizzaType);
            break;
        case 5:
            printf("%s Pizza with french fries is ready\n", pizzaType);
            break;
        default:
            printf("Invalid choice for %s Pizza. Please choose from 1 to 5\n", pizzaType);
    }
}

int main() {
    int pizzaChoice, extraChoice;

    printf("1. Chicken Pizza\n");
    printf("2. Cheese Pizza\n");
    printf("Enter choice (1-2) and extra choice (1-5) separated by space: ");
    scanf("%d %d", &pizzaChoice, &extraChoice);

    switch (pizzaChoice) {
        case 1:
            printMenu("Chicken");
            printChoice(extraChoice, "Chicken");
            break;

        case 2:
            printMenu("Cheese");
            printChoice(extraChoice, "Cheese");
            break;

        default:
            printf("Invalid choice for pizza type. Please choose 1 for Chicken Pizza or 2 for Cheese Pizza\n");
    }

    return 0;
}
