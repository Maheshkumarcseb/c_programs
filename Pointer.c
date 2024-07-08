#include<stdio.h>
void print(char *c)
{
    int i=0;
    while(c[i]!='\0')
    {
        printf("%c",c[i]);
        i++;
    }
    printf("\n");

}
int main()
{
    char c[20]="hello";
    print(c);
}


#include<stdio.h>
int main()
{
    char c1[6]="hello";
    char *c2;
    c2=c1;
    printf("%c",*c2);  // it will print h
    printf("%c",*c2+1);   // it will print i
    printf("%c",c1[2]);   // it will print l
    return 0;
}

#include<stdio.h>
int main()
{
    int a=5;
    int *p=&a;
    // p=&a;
    // a=5;
    printf("%d\n",a);
    printf("%d\n",p);
    // p=a;
    printf("%d\n",*p);
    *p=12;
    printf("%d\n",*p);
    int b=20;
    *p=b;
    printf("%d\n",p);
    printf("%d\n",*p);
    return 0;

}


// pointer arithmetic
#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    p=&a;
    printf(" p is %d\n",p);
    printf("value at address p is %d\n",*p);
    printf("size of integer is %d bytes \n ",sizeof(int));
    printf("Address p+1 is %d\n",p+1);
    printf("value at address p+1 is %d\n",*(p+1));

    printf("\n");
    printf("pointer operation for float values:\n");
    float a1=10;
    float *p1;
    p1=&a1;
    printf(" p1 is %d\n",p1);
    printf("value at address p1 is %f\n",*p1);
    printf("size of integer is %d bytes \n ",sizeof(float));
    printf("Address p1+1 is %d\n",p1+1);
    printf("value at address p1+1 is %d\n",*(p1+1));
    return 0;
}

#include<stdio.h>
int main()
{
    int a=1025;
    int *p;
    p=&a;
    printf("size of integer is %d bytes\n",sizeof(int));
    printf("Address=%d, value=%d\n",p,*p);
    printf("Address =%d, value=%d\n",p+1,*(p+1));

    printf("\n");
    char *p0;
    p0=(char*)p;  // type casting
    printf("size of char is %d bytes\n",sizeof(char));
    printf("Address=%d, value=%d\n",p0,*p0);
    printf("Address =%d, value=%d",p0+1,*(p0+1));     // 1025=00000000 00000000 00000100 00000001
    return 0;
}




#include<stdio.h>
int main()
{
    int a=1025;
    int *p;
    p=&a;
    printf("size of integer is %d bytes\n",sizeof(int));
    printf("Address=%d, value=%d\n",p,*p);
    void *p0;
    p0=p;
    printf("Address=%d",p0);
    return 0;
}


pointer to pointer

#include<stdio.h>
int main()
{
    int x=5;
    int *p=&x;
    *p=6;
    int **q=&p;
    int ***r=&q;
    printf("%d\n",*p);          // odd no of star gives us value at a address
    printf("%d\n",*q);          // even no of star gives address 
    printf("%d\n",**q);
    printf("%d\n",**r);
    printf("%d\n",***r);
    ***r=10;
    printf("x=%d\n",x);
    **q=*p+2;
    printf("x=%d\n",x);
    return 0;
}


call by value
#include<stdio.h>
    void increment(int a)
    {
        a=a+1;
        printf("Address of variable a in increment =%d",&a);
        
    printf("a=%d\n",a);
    }
    int main()
    {
    int a;
    a=10;
    increment(a);
    printf("a=%d\n",a);
    printf("Address of variable a in main =%d",&a);
    return 0;
    }


call by reference

#include<stdio.h>
    void increment(int *a)
    {
        *a=*a+1;
        printf("Address of variable a in increment =%d\n",&a);
        
    printf("a=%d\n",*a);
    }
    int main()
    {
    int a;
    a=10;
    increment(&a);
    printf("a=%d\n",a);
    printf("Address of variable a in main =%d\n",&a);
    return 0;
    }