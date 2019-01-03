#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 /*Count the frequency of digits*/
    char arr[1000];
    int num[10]={0},i=0,j,k;
    fgets(arr,sizeof arr,stdin);
    while(arr[i]!='\0')
    {
        if(arr[i]>='0' &&arr[i]<='9')
        {
            k=arr[i]-'0';
            num[k]++;
            i++;
        }
        else{
            i++;
        }
    }
    for(i=0;i<=9;i++){
        printf("%d ",num[i]);
    }


    return 0;
}
