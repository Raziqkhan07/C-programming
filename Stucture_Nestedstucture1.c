#include<stdio.h>
int main()
{
    struct employee_detailes
    {
        char name[20];
        char  des[20];
        int id;
        float sal;
        struct department_details
        {
            char branch[20];
            char name[20];
            struct department_division
            {
                char divname[10];
                char numb[20];

            }dd2;
        }dd;
    };
    struct employee_detailes ed;
    printf("Enter the employee Name:\t");
    scanf("%s",&ed.name);
    printf("Enter Designation:\t");
    scanf("%s",&ed.des);
    printf("Enter ID:\t");
    scanf("%d",&ed.id);
    printf("Enter Salary:\t");
    scanf("%f",&ed.sal);
    printf("\n Enter Company Name:\t");
    scanf("%s",&ed.dd.name);
    printf("Enter branch Location:\t");
    scanf("%s",&ed.dd.branch);
    printf("\nEnter department Name:\t");
    scanf("%s",&ed.dd.dd2.divname);
    printf("Enter Department Number:\t");
    scanf("%d",&ed.dd.dd2.numb);
    printf("\n----------------------------------------------------------\n");
    printf("employee Name:%s\n",ed.name);
    printf("Designation:%s\n",ed.des);
    printf("ID: %d\n",ed.id);
    printf("Salary:%f\n ",ed.sal);
    printf("department Name:%s\n",ed.dd.dd2.divname);
    printf("Department Number:%d\n",ed.dd.dd2.numb);
    printf("company Name:%s\n",ed.dd.name);
    printf("branch Location:%s",ed.dd.branch);
}
