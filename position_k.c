#include<stdio.h>
int main()
{
    int n,k,i,arr[100],counter=0;
    // printf("enter the no. of element");
    scanf("%d",&n);
    // printf("enter %d element",n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    // printf("enter the value of k");

    scanf("%d",&k);
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==k)
        {
        printf("%d ",i);
        counter++;
        }
    }
    if(counter==0)
    printf("-1");
    return 0;

}