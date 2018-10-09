#include<stdio.h>
void main()

{
    int arr[100],i,j,n;
    printf("Enter the value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
    }
}

