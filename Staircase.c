#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n, indexI, indexJ;
    scanf("%d",&n);
    for(indexI=1; indexI<=n; indexI++){
        for(indexJ= indexI; indexJ<n  ;indexJ++){
            printf(" ");
        }
        for(indexJ = 0; indexJ < indexI; indexJ++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}

