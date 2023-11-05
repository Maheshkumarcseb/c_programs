#include <stdio.h>

#include <math.h>
#include <stdlib.h>
int main()
{
    char ch;
    float a, b, c, root1, root2, realp, imagp, disc;
    printf("\n Enter the value of coefficient a: ");
    scanf("%f", &a);
    if (a == 0)
    {
        printf("\n Invalid input...Retry again");
        exit(0);
    }
    if(a==ch)
    {
         exit(0);
    }
    printf(" Enter the value of coefficients b and c:\n ");
    scanf("%f%f", &b, &c);
    disc = b * b - 4 * a * c; // compute discriminant
    if (disc == 0)
    {
        printf("The roots are real and equal\n");
        root1 = root2 = -b / (2.0 * a);
        printf(" Root1 = Root2 = %.2f\n", root1);
    }
    else
    {
        if (disc > 0)
        {
            printf("The roots are real and distinct\n");
            root1 = (-b + sqrt(disc)) / (2.0 * a);
            root2 = (-b - sqrt(disc)) / (2.0 * a);
            printf("Root1 = %.2f\n", root1);
            printf("Root2 = %.2f\n", root2);
        }
        else
        {
            printf("The roots are complex\n");
            realp = -b / (2.0 * a);
            disc = -disc;
            imagp = sqrt(disc) / (2.0 * a);
            printf("Root1 = %.2f + i%.2f\n", realp, imagp);
            printf("Root2 = %.2f - i %.2f\n", realp, imagp);
        }
    }
    return 0;
}
