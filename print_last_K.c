#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,k,val[100];
    printf("enter the value of n");
    scanf("%d",&n);
    if(n<=0)
    {
    printf("invalid input!!!  please enter a valid input");
    exit(0);
    }
    printf("enter the value of k");
    scanf("%d",&k);
    if(k<=0||k>n)
    {
    printf("invalid input please enter a valid input");
    exit(0);
    }
    printf("enter %d values",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&val[i]);
    }
    for(int i=n-k;i<n;i++)
    {
        printf("%d ",val[i]);
    }
    return 0;
}