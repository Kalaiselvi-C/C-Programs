#include<stdio.h>
void main()

{
    int arr[100],i,j,n;
    printf("Enter the value:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=n;j>0;j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}




