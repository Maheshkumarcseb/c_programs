// #include<stdio.h>
// int main()
// {
//     int a[10],n;
//     printf("enter the no of element:\n");
//     scanf("%d",&n);
//     printf("enter %d element",n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     int max=a[0];
//      for(int i=0;i<n;i++)
//     {
//         if(a[i]>max)
//         {
//             max=a[i];
//         }
//     }
//     printf("maximum  element is: %d\n",max);
//     int min=a[0];
//     for(int i=0;i<n;i++)
//     {
//         if(a[i]<min)
//         {
//             min=a[i];
//         }
//     }
//     printf("manimum  element is :%d\n",min);
//     return 0;
// }


#include<stdio.h>
int main()
{
     int a[10],n;
    printf("enter the no of element:\n");
    scanf("%d",&n);
    printf("enter %d element",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int min=a[0];
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    printf("maximum element is :%d\n",max);
    printf("minimum element is :%d\n",min);
    return 0;

}