#include<stdio.h>
int main()
{
    char s[101],counter=0;
    printf("enter a string");
   scanf("%s",s);
    
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
        printf("%c",s[i]);
        counter++;
        }
    } 
    if(counter==0)
    {
    printf("-1");
    }
    return 0;
}