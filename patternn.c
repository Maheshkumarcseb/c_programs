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










#include<stdio.h>           
int main()
{
    int i,j,k,n;
    printf("enter the value of n:");
    scanf("%d",&n);                                         
    for(i=0;i<n;i++)
    {
    //                             * 
    //                            * *
    //                           * * *
    //                          * * * *
    //                         * * * * *
        for(j=0;j<n-1-i;j++)
        {  
            if(i==n-1 && j==n-1 )
            printf(" ");
           printf(" ");
           
        }
        for(k=j;k<n;k++)
        {
            printf("%c ");
        }
        printf("\n");
    }
    return 0;
}
