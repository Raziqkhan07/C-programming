#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter the three numbers : ");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1<num2 && num1<num3)
    {
        printf("%d is smaller ",num1);
    }
    else if (num2<num3)
    {
         printf("%d is smaller ",num2);
    }
    else
    {
         printf("%d is smaller ",num3);
    }
    return 0;
}
