#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number to check the given number even or odd: ");
    scanf("%d",num);

    switch (num % 2)
    {
    case 0:
       printf(" %d Number is  Even\n", num);
       break;
    case 1:
       printf("%d Number is Odd\n", num);
       break;

    }
    return 0;
}
