#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *arr = (int*)malloc(5*sizeof(int));
    printf("Enter the elements : ");
    for(int i = 0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i<5; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
