#include<stdio.h>
int main()
{
    int n,val,sum=0;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter %d values:\n",n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&val);
        if(val%10==3||val%10==6)
        sum=sum+val;
    }
    printf("sum of digit whose unit digit is 3 or 6: ");
    printf("%d",sum==0?-1:sum);  
return 0;
}