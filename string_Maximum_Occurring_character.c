#include<stdio.h>
#include<string.h>
void max_occurring(char *str)
{
    int i,max=0;
    int freq[256]={0};
    for (i=0;str[i] !='\0';i++)
    {
        freq[str[i]]=freq[str[i]]+1;
    }
    for (i=0;i<256;i++)
    {
        if(freq[i]>freq[max])
        {
            max=i;
        }
    }
    printf("\n Character '%c' Appears Maximum of %d Times in a string: %s",max,freq[max],str);
}
int main()
{
    char str[100];
    printf("\nEnter the string: ");
    gets(str);
    max_occurring(str);
    return 0;
}
