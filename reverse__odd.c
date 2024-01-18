

#include<stdio.h>
// #include<stdlib.h>
int main()
{
    int n,counter=0;
    printf("enter the value of n");
    scanf("%d",&n);
    while(n!=0)
    {
        int rem = n%10;
        if(rem%2 != 0)
        {
            printf("%d",rem);
            counter++;
        }
        n=n/10;
    }
    if(counter==0)
    {
    printf(-1);
    }
    return 0;
}