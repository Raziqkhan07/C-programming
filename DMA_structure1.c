#include<stdio.h>
#include<stdlib.h>

int main()
{

     int n, i, *arr;

     printf("Enter size of array: ");
     scanf("%d",&n);
     arr= (int*) calloc(n, sizeof(int));
     if(arr==NULL)
     {
         printf("Memory not allocated.");
         exit(0);
     }

     else
     {
         printf("Array elements are:\n");
         for(i=0; i<n; i++)
         {
             printf("%d\t",*(arr+i));
         }
     }

     return 0;
}
