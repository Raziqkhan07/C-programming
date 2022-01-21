#include<stdio.h>
int main()
{
    int arr[100],pos,i,n,value;
    printf("enter array size: \n");
    scanf("%d",&n);
    printf("Enter the elements%d:\n",n);
    for (i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the location where you wish to insert element:\n");
    scanf("%d",&pos);
    printf("Enter the value to insert\n");
    scanf("%d",&value);
    for (i=n-1;i>=pos-1;i--)
        arr[i+1]=arr[i];
    arr[pos-1]=value;
    printf("Resultant Array: \n");
    for (i=0;i<=n;i++)
        printf("%d\n",arr[i]);

    return 0;
}

