#include <stdio.h>
main()
{
    int a[5], i;
    printf("Enter the elements:");
    for(i=0;i<5;i++)
        scanf("%d", &a[i]);
    printf("\nThe elements of the array are:\n");
    for(i=0;i<5;i++)
        printf("%d",a[i]);
}