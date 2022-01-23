#include<stdio.h>
int main()
{
   char str[100];
   int i;
   int vowels=0,conson=0,digits=0,spaces=0,special=0;
   printf("Enter the string: ");
   gets(str);
   for (i=0;str[i]!='\0';i++)
   {
       if (str[i]=='a'|| str[i]=='e'||str[i]=='i'|| str[i]=='o'||str[i]=='u'|| str[i]=='A'||str[i]=='E'|| str[i]=='I'||str[i]=='O'|| str[i]=='U')
       {
           vowels++;
       }
       else if ((str[i]>='a'&&str[i]<='z')|| (str[i]>='A'&&str[i]<='Z'))
       {
           conson++;

       }
       else if (str[i]>='0'&&str[i]<='9')
       {
           digits++;

       }
       else if (str[i]==' ')
       {
           spaces++;
       }
       else
       {
           special++;
       }
   }
   printf("\nvowels =%d",vowels);
   printf("\nConsonants =%d",conson);
   printf("\ndigits =%d",digits);
   printf("\nWhile spaces =%d",spaces);
   printf("\nSpecial Characters =%d",special);
   return 0;
}
