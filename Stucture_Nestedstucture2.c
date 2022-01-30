#include<stdio.h>
int main()
{
    int i;
    struct student
    {
        char name[20];
        char  des[20];
        int id;
        float marks;

    };
   // typedef struct student s;
    struct student_staff
    {
        char name1[10];
    };
   // typedef struct student_staff ss1;
    struct student_nonstaff
    {
        char name2[20];
    };
   // typedef struct student_nonstaff sns1;
    struct admin
    {
        struct student s[20];
        struct student_staff ss[20];
        struct student_nonstaff sns[20];

    };

    struct admin ad;
    struct admin b[3];
    struct admin *ptr=NULL;
    ptr=b;
    for (i=1;i<=3;i++)
    {
        printf("\nEnter student name:");
        scanf("%s",&ad.s[i].name);
        printf("\nEnter designation :");
        scanf("%s",&ad.s[i].des);
        printf("\nEnter ID:");
        scanf("%d",&ad.s[i].id);
        printf("\nEnter Marks:");
        scanf("%f",&ad.s[i].marks);
        printf("\nEnter staff Teacher:");
        scanf("%s",&ad.ss[i].name1);
        printf("\nEnter NON_staff:");
        scanf("%s",&ad.sns[i].name2);

       // printf("Name:%s",ad.s[i].name);
        //printf("Name:%s",ad.s[i].name);

    }
    for(i=1;i<=3;i++)
    {


        printf("\nName:%s",ad.s[i].name);
        printf("\ndesignation:%s",ad.s[i].des);
        printf("\nID:%d",ad.s[i].id);
        printf("\nmarks:%f",ad.s[i].marks);
        printf("\nNON staff:%s",ad.ss[i].name1);
        printf("\nName:%s",ad.sns[i].name2);
    }
    for (i=1;i<=3;i++)
    {
        ptr=b;
        printf("\nEnter student name:");
        scanf("%s",ptr->s[i].name);
        printf("\nEnter designation :");
        scanf("%s",ptr->s[i].des);
        printf("\nEnter ID:");
        scanf("%d",&ptr->s[i].id);
        printf("\nEnter Marks:");
        scanf("%f",&ptr->s[i].marks);
        printf("\nEnter staff Teacher:");
        scanf("%s",ptr->ss[i].name1);
        printf("\nEnter NON_staff:");
        scanf("%s",ptr->sns[i].name2);
        ptr++;

       // printf("Name:%s",ad.s[i].name);
        //printf("Name:%s",ad.s[i].name);

    }
    for(i=1;i<=3;i++)
    {

        ptr=b;
        printf("\nName:%s",ptr->s[i].name);
        printf("\ndesignation:%s",ptr->s[i].des);
        printf("\nID:%d",ptr->s[i].id);
        printf("\nmarks:%f",ptr->s[i].marks);
        printf("\n staff Name:%s",ptr->ss[i].name1);
        printf("\nNON staff Name:%s",ptr->sns[i].name2);
        ptr++;
    }
    //printf(" IN student....%s,%s,%d,%f\n",ad.s.name,ad.s.des,ad.s.id,ad.s.marks);
    //printf("IN student_staff......%s\n ",ad.ss.name1);
    //struct student_nonstaff.name1);
    //printf("IN student_nonstaff.....%s\n",ad.sns.name2);
}
