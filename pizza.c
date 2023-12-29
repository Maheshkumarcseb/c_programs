#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    // int a,b;
    int choice;
    printf("1.chicken pizza\n");
     printf("1.cheese pizza\n");
    printf("enter choice(1-2):");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("chicken pizza ready\n");
        printf("do you want any extra material\n");
        // printf("enter yes or no\n");
        // printf("enter the extra\n");
        // char ex;
        // scanf("%c",ex);
        // printf("%c",ex);
        // if(ex == "no")
        // {
        //     printf("plane chicken pizza ready");
        //     exit(0);
        // }
        // else
        // {
        printf("enter extra item to be put on chicken pizza\n");
        printf("1.only chicken pizza\n");
        printf("2.chicken pizzza with extra toppings\n");
        printf("3.chicken pizzza with extra chilli\n");
        printf("4.chicken pizzza with extra pepper\n");
        printf("5.chicken pizzza with french fries\n");
        int choice1;
        printf("enter choice(1-5)\n");
        scanf("%d", &choice1);
        switch (choice1)
        {
            case 1:
            printf("only chicken pizza ready");
            break;
            case 2:
            printf("2..chicken pizzza with extra toppings ready\n");
            break;
            case 3:
            printf("3.chicken pizzza with extra chilli ready\n");
            break;
            case 4:
            printf("4.chicken pizzza with extra pepper ready\n");
            break;
            case 5:
            printf("5.chicken pizzza with french fries ready\n");
            break;
            default:
            printf("enter from above choice\n");
        }
        
        break;

    case 2:
        printf("cheese pizza ready");
        
        printf("enter extra item to be put on cheese pizza\n");
        printf("1.only cheese pizza\n");
        printf("2.cheese pizzza with extra toppings\n");
        printf("3.cheese pizzza with extra chilli\n");
        printf("4.cheese pizzza with extra pepper\n");
        printf("5.cheese pizzza with french fries\n");
        int choice2;
        printf("enter choice(1-5)\n");
        scanf("%d", &choice2);
        switch (choice2)
        {
            case 1:
            printf("only cheese pizza ready");
            break;
            case 2:
            printf("2..cheese pizzza with extra toppings ready\n");
            break;
            case 3:
            printf("3.cheese pizzza with extra chilli ready\n");
            break;
            case 4:
            printf("4.cheese pizzza with extra pepper ready\n");
            break;
            case 5:
            printf("5.cheese pizzza with french fries ready\n");
            break;
            default:
            printf("enter from above choice\n");
        }
        break;

    default:
        printf("enter from above choice");
    }
    return 0;
}