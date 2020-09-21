#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    long int ar[1000], sum=0;
    int n, index;
    scanf("%d", &n);
    for(index=0; index<n; index++){
        scanf("%ld", &ar[index]);
    }
    for(index=0; index<n; index++){
        sum= sum+ ar[index];
    }
    printf("%ld", sum);
}

