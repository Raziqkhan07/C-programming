#include<stdio.h>
int main()
{
    int i,noodays;
    int firstday;
    printf("Enter no of days in a month : ");
    scanf("%d",&noodays);
    printf("Enter first day in a month  : ");
    scanf("%d",&firstday);
    printf(".................January..................\n");
    printf("sun     mon     tue     wed     thu     fri     sat\n");
    for (i=1;i<firstday;i++)
    printf("     ");
    for(i+1;i<=noodays;i++)
    {
        printf("%ld     ",i);
        if((firstday+i-1)%7==0)
            printf("\n");

    }
    return 0;
}
