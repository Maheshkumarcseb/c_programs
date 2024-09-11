//  BRUTE FORCE TECHNIQUE


#include<stdio.h>
int main()
{
    int arr[20],n,i,k;
    printf("enter the no of element of array in array:\n");
    scanf("%d",&n);
    printf("enter the array of element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("enter the no of element of rotate:\n");
    scanf("%d",&k);

    int karr[10];
    for(i=0;i<k;i++)
    {
        karr[i]=arr[i];
    }
    // printf("array is:\n");
    // for(i=0;i<k;i++)
    // printf("%d ",karr[i]);
    int arrk[10];
    for(i=0;i<n;i++)
    {
        arrk[i]=arr[i+k];
    }
    // for(i=0;i<n-k;i++)
    // printf("%d ",arrk[i]);

    printf("Rotated Array is:\n");
     for(i=0;i<n-k;i++)
    printf("%d ",arrk[i]);
     for(i=0;i<k;i++)
    printf("%d ",karr[i]);

return 0;
}