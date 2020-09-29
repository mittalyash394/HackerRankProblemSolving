#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, arr[100], i, j,k, sum=0, result;
    scanf("%d %d", &n, &k);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            result = arr[i] + arr[j];
            if(result % k == 0){
                sum++;
            }
        }
    }
    printf("%d", sum);
    return 0;
}

