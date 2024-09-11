
// left rotate of array by 1
#include<stdio.h>
int main()
{
    int arr[20],n,i;
    printf("enter the no of element of array in array:\n");
    scanf("%d",&n);
    printf("enter the array of element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int temp=arr[0];
    for(i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    printf("Rotated element of array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}