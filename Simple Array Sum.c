#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, ar[1000], index, sum=0;
    scanf("%d",&n);
    for(index=0; index<n; index++){
        scanf("%d",&ar[index]);
    }
    for(index=0; index<n; index++){
        sum= sum + ar[index];
    }
    printf("%d",sum);
    return 0;
}

