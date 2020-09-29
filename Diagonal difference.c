#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int arr[100][100];
    int i, j, sum=0, n, rightsum=0, leftsum=0, difference;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                rightsum = rightsum + arr[i][j];
            }
        }
    }
    for(i=0;i<n;i++){
        leftsum= leftsum+ arr[i][n-i-1];
    }
    if(leftsum > rightsum){
        difference= leftsum - rightsum;
        printf("%d\n", difference);
    }
    else if(rightsum > leftsum){
        difference = rightsum - leftsum;
        printf("%d\n",difference);
    }
    else{
        printf("%d\n", difference);
    }
    return 0;

}

