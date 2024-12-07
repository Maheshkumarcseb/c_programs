#include<stdio.h>
#include<math.h>
void primefactors(int n)
{
    printf("prime factors of %d are",n);

    while(n%2 ==0)
    {
        printf("2 ");
        n/=2;
    }
    for(int i=3; i<=sqrt(n); i+=2)
    {
        while(n%i ==0)
        {
            printf("%d ",i);
            n/=i;
        }
    }
    if(n>2)
    printf("%d ",n);
}
int main()
{
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);
    primefactors(n);
    return 0;


}