#include<stdio.h>
#include<stdlib.h>
struct students
{
    int id,agr;
    char name[100],course[100];
};
int main()
{
    int n;
    struct students std;
    FILE *fp=fopen("file1.txt","w");
    if (fp==NULL)
    {
        printf("Error to opening File...");
        exit(2);
    }
    //for(i)
    printf("Enter Name:\n");
    scanf("%s",std.name);
    printf("Enter ID num AND Age \n");
    scanf("%d%d",&std.id,&std.agr);
    printf("Enter cource Name:\n");
    scanf("%s",std.course);
    //fwrite(&std,sizeof(struct students),1,fp);
    //fp=fopen("file1.txt","r");
    fprintf(fp,"%s %d %d %s",std.name,std.id,std.agr,std.course);
   // fread(&std,sizeof(struct students),1,fp);
    fclose(fp);
    fp=fopen("file1.txt","r");
    if (fp==NULL)
    {
        printf("Error to opening File...");
        exit(2);
    }
    printf("Name :%s",std.name);
    printf("\nId and Age: %d &%d ",std.id,std.agr);
    printf("\ncoure :%s",std.course);
}
