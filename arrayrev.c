#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,arr[1000],i;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}
