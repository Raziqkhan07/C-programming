#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    FILE *fp=fopen("student.txt","r+");
    fseek(fp,7,SEEK_SET);

    //fseek(fp,-2,SEEK_END);
    ch=fgetc(fp);
    //fputc("e",fp);
    printf("%c\n",ch);
    fseek(fp,-5,SEEK_CUR);
    ch=fgetc(fp);
    printf("%c\n",ch);
    fseek(fp,-10,SEEK_END);

    ch=fgetc(fp);

    printf("%c\n",ch);
    ch=fputc("eeee",fp);

    printf("%c\n",ch);
    //fputs(str,stdout);
    fclose(fp);
    return 0;
}

