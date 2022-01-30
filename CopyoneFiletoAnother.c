#include<stdio.h>
int main()
{
      int ch;
      FILE *fp,*fq;
      fp=fopen("studentdetails.txt","r");
      fq=fopen("studentdetailscopy1.txt","w");
      if(fp==NULL||fq==NULL)
            printf("File does not exist..");
      else
            while((ch=fgetc(fp))!=EOF)
            {
                  fputc(ch,fq);
            }
      printf("File copied.....");
      return 0;
}
