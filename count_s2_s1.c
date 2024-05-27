#include<stdio.h>
int main()
{
    char s1[101],s2[3];
    printf("enter two string");
    scanf("%s%s",s1,s2);
    int count=0;
    for(int i=0;s1[i+1]!='\0';i++)
    {
        if(s1[i]==s2[0]&&s1[i+1]==s2[1])
        count++;
    }
    printf("count is:");
    printf("%d",count);
    return 0;
}