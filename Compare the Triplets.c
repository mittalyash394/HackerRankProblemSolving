#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a[100], b[100], index,A=0, B=0, C=0;
    for(index=0; index<3; index++){
        scanf("%d ", &a[index]);
    }
    for(index=0; index<3; index++){
        scanf("%d",&b[index]);
    }
    for(index=0; index<3; index++){
        if(a[index] > b[index]){
            A++;
        }
        else if(b[index] > a[index]){
            B++;
        }
        else {
            C++;
        }
    }
    printf("%d %d", A, B);
    return 0;
}

