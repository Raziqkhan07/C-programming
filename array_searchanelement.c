#include<stdio.h>
int main()
{
    int a[100],n,ele,pos=0;
    int i;
    printf("enter array size: ");
    scanf("%d",&n);
    printf("Enter the array Elements:\n ");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter Element to search: ");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            printf("%d found at the  position: %d",ele,i+1);

        }

    }
    printf("%d Not FOUND...",ele);
    return 0;
}
