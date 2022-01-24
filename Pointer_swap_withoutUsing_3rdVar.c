#include<stdio.h>
int main()
{
    int a=10,b=20;
    int *p1=&a;
    int *p2=&b;
    printf("before swaping:a=%d,b=%d",*p1,*p2);
    *p1+=*p2;
    *p2-=*p1;
    *p1-=*p2;
    printf("\nAfter swaping:a=%d,b=%d",*p1,*p2);
    return 0;
}
