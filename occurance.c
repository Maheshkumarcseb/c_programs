// #include <stdio.h>

// int main() {
//     int n;

//     // Input the number of integers
//     printf("Enter the number of integers: ");
//     scanf("%d", &n);

//     if (n <= 0) {
//         printf("Invalid input for the number of integers.\n");
//         return 1;  // Exit the program with an error code
//     }

//     // Input the integers
//     int lastInteger, count = 0;
//     printf("Enter %d integers:\n", n);
//     for (int i = 0; i < n; i++) {
//         int currentInteger;
//         scanf("%d", &currentInteger);

//         // Update count if the current integer matches the last integer
//         if (i == n - 1) {
//             lastInteger = currentInteger;
//             count = 1;  // Initialize count for the last integer
//         } else if (currentInteger == lastInteger) {
//             count++;
//         }
//     }
//     // Output the result
//     printf("Number of occurrences of the last integer (%d): %d\n", lastInteger, count);

//     return 0;
// }


#include<stdio.h>
int main()
{
    int n,k,i,arr[100];
    printf("enter the no. of element");
    scanf("%d",&n);
    printf("enter %d element",n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the value of k");

    scanf("%d",&k);
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==k)
        printf("%d ",i);
    }
    return 0;

}