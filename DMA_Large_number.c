#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j;
    float *data;

    printf("Enter total number of elements(1 to 100): ");
    scanf("%d", &j);
    data = (float*) calloc(j, sizeof(float));
    if(data == NULL)
    {
        printf("Error!...memory not allocated.");
        return 0;
    }
    for(i = 0; i < j; ++i)
    {
        printf("Enter Number %d: ", i + 1);
        scanf("%f", data + i);
    }
    for(i = 1; i < j; ++i)
    {
        if(*data < *(data + i))
            *data = *(data + i);
    }
    printf("Largest element = %.2f", *data);

    return 0;
}
