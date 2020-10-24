#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int n, height[100], index, k, ans, max_value=0;
    scanf("%d %d", &n, &k);
    for(index=0; index<n; index++){
        scanf("%d", &height[index]);
    }
    for(index=1; index<n; index++){
        if(height[0] < height[index]){
            height[0] = height[index];
        }
    }
    //printf("%d\n", height[0]);
    if(height[0] >= k){
        ans = height[0] - k;
        printf("%d\n", ans);
    }
    else if(height[0] < k){
        ans = 0;
        printf("%d\n", ans);
    }
    return 0;
}
