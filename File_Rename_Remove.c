#include<stdio.h>
int main()
{
    int successful=0;
    successful=rename("file1.txt","File01.txt");
    if(successful !=0)
    printf("\n The file is not renamed");
    remove("file3.txt");
}
