
#include<stdio.h>
int main()
{
    int n,i,counter=0;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d value",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        if(i%2==0)
        printf("%d ",arr[i]);
    }
    if(counter==0)
    {
        printf(-1);
    }
    return 0;
}