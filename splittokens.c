#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i=0,j=0,k=0;
    char s[1000],aa[1000][1000];
    fgets(s,sizeof s,stdin);

    for(i=0;i<(strlen(s));i++)
    {
        if(s[i]==' '||s[i]=='\0')
        {
         aa[j][k]='\0';
         j++;
         k=0;
         }
         else{
             aa[j][k]=s[i];
             k++;
         }

    }
    for(i=0;i<=j;i++){
        printf("%s\n",aa[i]);
    }
    return 0;
}

