#include <stdio.h>
void main()
{
     int successful=0;
     successful = rename("student.txt", "studentdetails.txt");
     if (successful !=0)
     printf("\nThe file is not renamed");

     remove("File3.txt");

}
