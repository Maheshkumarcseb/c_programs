#include <stdio.h>
int main()
{
    int n, arr[100];
    printf("enter the value of n:");
    scanf("%d", &n);
    printf("enter %d value", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("entered element are:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            for (int i = 0; i < n; i++)
            {
               
                printf("%d ", arr[i]);
            }
                printf("\n");
        }
        
    }
    
    return 0;
}