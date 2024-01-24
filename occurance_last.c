#include<stdio.h>
int main()
{
    int n,val[101],count=0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&val[i]);
    }
    // printf("last element is");
    for(int i=1;i<=n;i++)
    {
        if(val[i]==val[n])
        {
        // printf("%d ",val[i]);
        count++;
        }
    }
    printf("%d",count);
    return 0;
}
