#include<stdio.h>
int main()
{
    int i, n, a[10];
    for(i =0; i<10;i++)
    {
        printf("Enter the element a[%d]\n", i);
        scanf("%d",&a[i]);
    }
    for(i=0; i<10;i++)
    {
        n += a[i];
    }
    printf("Sum of elements of the array is: %d\n",n );
}
