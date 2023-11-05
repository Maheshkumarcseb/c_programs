#include <stdio.h>
int main()
{
    int num1, num2, result;
    float divresult;
    char op;
    printf("enter the operation to be done\n");
    scanf("%c", &op);
    printf("enter the value of num1 and num2\n");
    scanf("%d %d", &num1, &num2);
    switch(op)
    {
    case '+':
        printf("addition");
        printf("%d + %d = %d", num1, num2, num1 + num2);
        break;
    case '-':
        result = num1 - num2;
        printf("Subtraction = %d\n", result);
        break;
    case '*':
        result = num1 * num2;
        printf("Multiplication = %d\n", result);
        break;
    case '/':
        divresult = num1 / (float)num2;
        printf("Division = % .2f\n", divresult);
        break;
    default:
        printf("error,try again");
    }
    return 0;
}
