#include<stdio.h>
int main()
{
    int phy,che,bio,math,com;
    float per;
    printf("enter the five subjects marks: ");
    scanf("%d%d%d%d%d",&phy,&che,&bio,&math,&com);
    per=(phy+che+bio+math+com)/5.0;
    printf("Percentage = %0.2f\n",per);
    if(per>=90)
    {
        printf("Grade A");
    }
    else if (per >=80)
    {
       printf("Grade b");
    }
    else if (per >=70)
    {
        printf("grade C");
    }
    else if (per >=60)
    {
        printf("grade D");;
    }
    else if (per >=40)
    {
        printf("grade E");
    }
    else
    {
        printf("grade F");
    }
    return 0;
}
