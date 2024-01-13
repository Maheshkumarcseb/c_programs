#include<stdio.h>
#include<stdlib.h>
int main()
{
    int time,newtime=0;
    printf("enter the time in 24 hour format: ");
    scanf("%d",&time);

    if(time>2400){
    printf("please enter a valid input");
    exit(0);
}

    if(time==0){
    printf("%d",1200);
    printf(" AM");
    }

    else if(time>1200){
    newtime=newtime+(time-1200);
    printf("%d ",newtime);
    printf("PM");
    }
    
    else{
    printf("%d ",time);
    printf("AM");
    }
}