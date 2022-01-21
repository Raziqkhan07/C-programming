#include<stdio.h>
int main()
{
    char str[100];
    char s[100][100];
    int n,i;
    printf("Enter Number of strings: ");
    scanf("%d",&n);
    for (i=0;i<n;++i)
    {
        scanf("%s",s[i]);
    }
    printf("Enter string to Search: ");
    scanf("%s",str);
    for (i=0;i<n;++i)
    {
        if (!strcmp(str,s[i]))
        {
            break;
        }
    }
    if (i != n)
    {
        printf("%s is present in the string %d ",str,i);
    }
    else
    {
        printf("%s is not present in the string ",str);
    }
    return 0;
}
