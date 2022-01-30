#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fptr,*fptr1;
    char ch;
    int i=0,mv=0;
   // int wrd=0,charctr=0,line=0,n,cun=0;
    char fname[20];
    printf("Enter the Margin  number: ");
          scanf("%d",&mv);
    printf(" Input the filename to be opened : ");
	scanf("%s",fname);

    fptr=fopen(fname,"r");
    fptr1=fopen("file1.txt","w");
    if(fptr==NULL || fptr1==NULL)
     {
         printf(" File does not exist or can not be opened.");
         exit(1);
      }
      while((ch=fgetc(fptr))!=EOF)
      {
          fputc(ch,fptr1);
          if(ch=='\n')
          {
              i=0;
          }
          i++;
          if(i==mv)
          {
              while((ch=fgetc(fptr))!=' ' && ch!='\n' && ch!='\t' && ch!='\0')
              {
                  fputc(ch,fptr1);
              }
              if (ch==' ' || ch=='\n')
              {
                  fputc('\n',fptr1);
                  i=0;
              }
          }
      }
     fclose(fptr);
     fclose(fptr1);
}
