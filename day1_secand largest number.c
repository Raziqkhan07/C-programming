#include<stdio.h>
int main()
{
    int i,n,a,b,num;
    a=b=0;
    printf("Enter the maximum amount of number : ");
    scanf("%d",&n);
    printf("\n\n");
    for (i=0;i<n;i++)
    {
        printf("enter the number : ");
        scanf("%d",&num);
        if (num>a)
        {
            b=a;
            a=num;

        }
         else if (num>b)
            b=num;
    }
    printf("Second largest number :%d\n",b);
    return 0;

}
