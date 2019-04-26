#include<stdio.h>
void main()

{
    int arr[100],i,j,n;
    printf("Enter the value:");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
    }
}



