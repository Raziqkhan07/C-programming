#include<stdio.h>
int main()
{
    int arr[100],pos,i,n;
    printf("enter array size: \n");
    scanf("%d",&n);
    printf("Enter the elements%d:\n",n);
    for (i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the location where you wish to delete element:\n");
    scanf("%d",&pos);
    if(pos>=n+1)
        printf("delete not possible.\n");
    else
    {
        for (i=pos-1;i<n-1;i++)
        arr[i]=arr[i+1];
        printf("Resultant Array: \n");
        for (i=0;i<n-1;i++)
            printf("%d\n",arr[i]);
    }
    return 0;
}
