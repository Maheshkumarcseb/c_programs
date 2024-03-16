#include <stdio.h>
int main()
{
    int n,a[10],tar,flag=0;
    printf("Enter the no. of elements : \n");
    scanf("%d", &n);
    printf("enter the target:\n");
    scanf("%d",&tar);
    printf("Enter the array in sorted \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int low=0;
    int high=n-1;
    while(low<high)
    {
    if(a[low]+a[high]==tar){
        printf("required numbers are %d and %d:",a[low],a[high]);
        flag=1;
        return 0;
    }
    else if(a[low]+a[high]>tar)
        high--;
    else
        low++;
    }    
    return 0;
}