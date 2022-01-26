#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ch;
    FILE *fp=fopen("file1.txt","w");
    if(fp==NULL)
    {
        printf("File not Found\n");
        exit(7);
    }
    printf("Enter the data:\n");
    while((ch=getchar())!='\n')
    {
        putc(ch,fp);
    }
    fclose(fp);
    fopen("file1.txt","r");
    printf("\nFile content:\n");
    while((ch=getc(fp)) != EOF)
    {
        printf("%c",ch);
    }
    printf("\n End of file");
    fclose(fp);
    return 0;
}
