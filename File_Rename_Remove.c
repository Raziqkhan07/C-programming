#include<stdio.h>
int main()
{
    int successful=0;
    successful=rename("test.txt","Test01.txt");
    if(successful !=0)
    printf("\n The file is not renamed");
    remove("file3.txt");
    printf("File remove from directry Successfully.....");
}
