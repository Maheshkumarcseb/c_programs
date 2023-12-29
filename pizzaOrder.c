#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    // int a,b;
    int choice;
    printf("enter choice(1-2):");
    scanf("%d", &choice);
    switch(choice)
    {
    case 1:
        printf("chicken pizza ready\n");
        printf("do you want any extra material\n");
        int ch3;
        printf("enter 1 for YES and 2 for NO\n");
        scanf("%d",&ch3);
        switch(ch3)
        {
        case 1:
            printf("enter extra item to be put on pizza\n");
            printf("1.only chicken pizza\n");
            printf("2.chicken pizzza with extra toppings\n");
            printf("3.chicken pizzza with extra chilli\n");
            printf("4.chicken pizzza with extra pepper\n");
            printf("5.chicken pizzza with french fries\n");
            int choice1;
            printf("enter choice(1-5)\n");
            scanf("%d", &choice1);
            switch(choice1)
            {
            case 1:
                printf("only chicken pizza");
            case 2:
                printf("2..chicken pizzza with extra toppings\n");
                break;
            case 3:
                printf("3.chicken pizzza with extra chilli\n");
                break;
            case 4:
                printf("4.chicken pizzza with extra pepper\n");
                break;
            case 5:
                printf("5.chicken pizzza with french fries\n");
                break;
            default:
                printf("enter from above choice\n");
            }
        case 2:
            printf("plane chicken pizza\n");
            break;
        default:
            printf("select from above\n");
        }
    case 2:
        printf("cheese pizza ready\n");
        printf("do you want any extra material\n");
        int ch4;
        printf("enter 1 for YES and 2 for NO\n");
        scanf("%d",&ch4);
        switch(ch4)
        {
        case 1:
            printf("enter extra item to be put on pizza\n");
            printf("1.only chicken pizza\n");
            printf("2.cheese pizzza with extra toppings\n");
            printf("3.cheese pizzza with extra chilli\n");
            printf("4.cheese pizzza with extra pepper\n");
            printf("5.cheese pizzza with french fries\n");
            int choice1;
            printf("enter choice(1-5)\n");
            scanf("%d", &choice1);
            switch(choice1)
            {
            case 1:
                printf("only cheese pizza");
            case 2:
                printf("cheese pizzza with extra toppings\n");
                break;
            case 3:
                printf("cheese pizzza with extra chilli\n");
                break;
            case 4:
                printf("cheese pizzza with extra pepper\n");
                break;
            case 5:
                printf("cheese pizzza with french fries\n");
                break;
            default:
                printf("enter from above choice\n");
                break;
            }
        case 2:
            printf("plane cheese pizza ready\n");
            break;
         default:
            printf("select from above\n");
        }
    }   
      return 0;
}