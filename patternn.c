// #include<stdio.h>
// int main()
// {
//     int i,j,n;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {                                      * * * * 
//                                            * * *
//                                            * *
//                                            *
//         for(j=i;j<n;j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;

// }



// #include<stdio.h>           
// int main()
// {
//     int i,j,n;
//     printf("enter the value of n:");
//     scanf("%d",&n);                                         
//     for(i=0;i<n;i++)
//     {                                        * 
//                                              * *
//                                              * * *
//                                              * * * *         
//         for(j=0;j<=i;j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;

// }





// #include<stdio.h>           
// int main()
// {
//     int i,j,k,n;
//     printf("enter the value of n:");
//     scanf("%d",&n);                                         
//     for(i=0;i<n;i++)
//     {                                    *
//                                         **
//                                        ***
//                                       ****                
//         for(j=0;j<n-i;j++)
//         {
//             printf(" ");
//         }
//         for(k=j;k<=n;k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }




// #include<stdio.h>           
// int main()
// {
//     int i,j,k,n;
//     printf("enter the value of n:");
//     scanf("%d",&n);                                         
//     for(i=0;i<n;i++)
//     {
//                                     // ****
//                                     //  ***
//                                     //   **  
//                                     //    *             
//         for(j=i;j>0;j--)
//         {
//             printf(" ");
//         }
//         for(k=n-i;k>0;k--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }





// #include<stdio.h>           
// int main()
// {
//     int i,j,k,n;
//     printf("enter the value of n:");
//     scanf("%d",&n);                                         
//     for(i=0;i<n;i++)
//     {          
//         for(j=0;j<n;j++)
//         {
//             if(i==0||i==n-1|| j==0 || j==n-1)
//             printf("*");
//             else
//             printf(" ");

//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>           
// int main()
// {
//     int i,j,k,n;
//     printf("enter the value of n:");
//     scanf("%d",&n);                                         
//     for(i=0;i<n;i++)
//     {
//     //                             * 
//     //                            * *
//     //                           * * *
//     //                          * * * *
//     //                         * * * * *
//         for(j=0;j<n-1-i;j++)
//         {  
//            printf(" ");
           
//         }
//         for(k=j;k<n;k++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }



// #include<stdio.h>           
// int main()
// {
//     int i,j,k,n;
//     printf("enter the value of n:");
//     scanf("%d",&n);                                         
//     for(i=0;i<n;i++)
//     {
//     //                             * 
//     //                            * *
//     //                           * * *
//     //                          * * * *
//     //                         * * * * *
//         for(j=0;j<n-1-i;j++)
//         {  
//             if(i==n-1 && j==n-1 )
//             printf(" ");
//            printf(" ");
           
//         }
//         for(k=j;k<n;k++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }




// #include<stdio.h>
// int main()
// {
//     int i,j,k,n;
//     char ch;
                                                            //  A
                                                            //  BC
                                                            //  CDE
                                                            //  DEFG
                                                            //  EFGHI
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     for (int i = 0; i < n; i++) {
//         ch = 'A' + i; // Starting character for each row
//         for (int j = 0; j <= i; j++) {
//             printf("%c", ch);
//             ch++;
//         }
//         printf("\n");
//     }
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int i,j,k,n;
//     char start;
//     printf("enter the value of n:");
//     scanf("%d",&n);
                                    // E
                                    // DE
                                    // CDE
                                    // BCDE
                                    // ABCDE
//    for (i = 0; i < 5; i++) {
//         start = 'E' - i;  // Determines the starting character for each row
//         for (j = 0; j <= i; j++) {
//             printf("%c", start + j);
//         }
//         printf("\n");
//     }
//     return 0;
// }








#include <stdio.h>

int main() {
    int n = 3; // Size of the matrix (3x3)
    int arr[3][3];
    int num = 1;
    int left = 0, right = n - 1, top = 0, bottom = n - 1;

    while (num <= n * n) {
        // Fill from left to right
        for (int i = left; i <= right; i++) {
            arr[top][i] = num++;
        }
        top++;

        // Fill from top to bottom
        for (int i = top; i <= bottom; i++) {
            arr[i][right] = num++;
        }
        right--;

        // Fill from right to left
        for (int i = right; i >= left; i--) {
            arr[bottom][i] = num++;
        }
        bottom--;

        // Fill from bottom to top
        for (int i = bottom; i >= top; i--) {
            arr[i][left] = num++;
        }
        left++;
    }

    // Print the matrix in reverse row order
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
