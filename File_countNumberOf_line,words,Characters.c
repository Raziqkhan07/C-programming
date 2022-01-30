#include<stdio.h>
#include<stdlib.h>

void main()
{
FILE *fptr,*fnew;
char fname[100],ch;
int n,cnt;
printf("Enter the file name to read : ");
scanf("%s",fname);
printf("Enter the value to justify : ");
scanf("%d",&n);
fptr=fopen(fname,"r");
if(fptr==NULL)
{
printf("file doesn't exists");
}
fnew=fopen("newfile.txt","w");
cnt=0;
while((ch=fgetc(fptr))!=EOF)
{
if(cnt<=n)
{

fputc(ch,fnew);
// printf("%c",ch);
cnt++;
}
else
{

// fputc(ch,fnew);
while(ch!='\t'||ch!='\0'||ch!='\n'||ch!=' ')
{
fputc(ch,fnew);
}
if(ch=='\t'||ch=='\0'||ch=='\n'||ch==' ')
{
fputc('\n',fnew);
}
cnt=0;

// printf('\n');

}
}
fclose(fptr);
fclose(fnew);
int characters=0, words=0, lines=0;
fptr = fopen("File03.txt", "r");
if (fptr == NULL)
{
printf("\nUnable to open file.\n");
exit(1);
}
while ((ch = fgetc(fptr)) != EOF)
{
characters++;
if (ch == '\n' || ch == '\0')
lines++;
if (ch == ' ' || ch == '\t')
words++;
}

printf("\n");
printf("Total characters = %d\n", characters);
printf("Total words = %d\n", words);
printf("Total lines = %d\n", lines);
fclose(fptr);
}
