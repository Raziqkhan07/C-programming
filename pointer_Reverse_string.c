#include<stdio.h>
#include<conio.h>
int main()
{
    char *str;
    int len,i;
    printf("Enter the string:\n");
    gets(str);
    len=strlen(str);
    printf("The Reversed string :");
    for (i=len;i>=0;i--)
        printf("%c",*(str+i));
    getch();
}
