#include<stdio.h>
void main()
{
int arr[100][100],i,j,n,a=0,b=0,c;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
 scanf("%d",&arr[i][j]);
}


}
printf("Matrix is\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{

 printf("%d\t",arr[i][j]);
}
printf("\n");

}
for(i=0;i<n;i++)
{
a=a+arr[i][i];
b=b+arr[i][n-i-1];
}
printf(" Sum of  diagonals are:%d %d\n",a,b);
printf("Absolute difference of diagonal:\n");
if(a>b){
        c=a-b;
    printf("%d",c);
}
if(a<b){
    c=b-a;
    printf("%d",c);
}


}
