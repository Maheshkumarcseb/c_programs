#include <stdio.h>

void printMenu(const char *pizzaType) {
    printf("%s pizza ready\n", pizzaType);
    printf("Do you want any extra material?\n");
    printf("1. Only %s pizza\n", pizzaType);
    printf("2. %s pizza with extra toppings\n", pizzaType);
    printf("3. %s pizza with extra chilli\n", pizzaType);
    printf("4. %s pizza with extra pepper\n", pizzaType);
    printf("5. %s pizza with french fries\n", pizzaType);
}

int main() {
    int choice;

    printf("1. Chicken Pizza\n");
    printf("2. Cheese Pizza\n");
    printf("Enter choice (1-2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            printMenu("Chicken");
            int extraChoice;
            printf("Enter choice (1-5): ");
            scanf("%d", &extraChoice);

            switch (extraChoice) {
                case 1:
                    printf("Only Chicken Pizza is ready\n");
                    break;
                case 2:
                    printf("Chicken Pizza with extra toppings is ready\n");
                    break;
                case 3:
                    printf("Chicken Pizza with extra chilli is ready\n");
                    break;
                case 4:
                    printf("Chicken Pizza with extra pepper is ready\n");
                    break;
                case 5:
                    printf("Chicken Pizza with french fries is ready\n");
                    break;
                default:
                    printf("Invalid choice. Please choose from 1 to 5\n");
            }
            break;
        }

        case 2: {
            printMenu("Cheese");
            int extraChoice;
            printf("Enter choice (1-5): ");
            scanf("%d", &extraChoice);

            switch (extraChoice) {
                case 1:
                    printf("Only Cheese Pizza is ready\n");
                    break;
                case 2:
                    printf("Cheese Pizza with extra toppings is ready\n");
                    break;
                case 3:
                    printf("Cheese Pizza with extra chilli is ready\n");
                    break;
                case 4:
                    printf("Cheese Pizza with extra pepper is ready\n");
                    break;
                case 5:
                    printf("Cheese Pizza with french fries is ready\n");
                    break;
                default:
                    printf("Invalid choice. Please choose from 1 to 5\n");
            }
            break;
        }

        default:
            printf("Invalid choice. Please choose from 1 to 2\n");
    }

    return 0;
}
