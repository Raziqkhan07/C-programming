#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fptr,*fptr1;
    char ch;
    int i=0,mv=0,j;
   int words=0,characters=0,lines=0,n,cun=0;
    char fname[20], fname1[20];
    printf("Enter the Margin  number: ");
    scanf("%d",&mv);
    printf(" Input the filename to be opened : ");
	scanf("%s",fname);
	printf(" Input the filename to be Past the Content : ");
	scanf("%s",fname1);

	fptr=fopen(fname,"r");
    fptr1=fopen(fname1,"w");
    if(fptr==NULL || fptr1==NULL)
     {
         printf(" File does not exist or can not be opened.");
         exit(1);
      }
     // char arr[100000];
    while((ch=fgetc(fptr))!=EOF)//till end
      {
          fputc(ch,fptr1);// entering char by char to file
          if(ch=='\n')// if the \n  true
          {
              i=0;//
          }
           //0,
          i++;
          if(i==mv)

          {
              while((ch=fgetc(fptr))!=' ' && ch!='\n' && ch!='\t' && ch!='\0')

              if (ch==' ' || ch=='\n')
              {
                   fputc('\n',fptr1);
                  //fputc('',fptr1);

                  i=0;

              }

         }
                 // fputc('\n',fptr1);


          }
          fptr1=fopen(fname1,"r");
      if (fptr == NULL)
      {
         printf("\nUnable to open file.\n");
         exit(1);
      }
      while ((ch = fgetc(fptr)) != EOF)
           {

               if (ch == '\n' || ch == '\0')
               {
                  lines++;
               }

               else if (ch == ' ' || ch == '\t')
               {
                   words++;
               }
               else
               {
                    characters++;
               }

           }
           ch=fgetc(fptr1);
           printf("\n");
           printf("Total characters = %d\n", characters);
           printf("Total words = %d\n", words);
           printf("Total lines = %d\n", lines);

      //fwrite(fptr,sizeof(mv),500,fptr1);
      //fflush(fptr1);


               // ch=fgetc(fptr1);
                // printf("\nThe number of words in the  file %s are : %d\n",fname1,wrd);
                // printf("The number of characters in the  file %s are : %d\n",fname1,charctr);
                // printf("The number of Lines in the  file %s are : %d\n",fname1);
                fclose(fptr);
                fclose(fptr1);
}
