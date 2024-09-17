#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    // first we  right shift the the number by one n>>1
    //  then left shift by one <<
    if(n==((n>>1)<<1))
        printf("even");
    else
        printf("odd");
    return 0;
}