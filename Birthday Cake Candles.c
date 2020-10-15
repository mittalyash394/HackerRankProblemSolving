#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int i,max=0,count=0;
    for(i=0;i<n;i++)
    {
       int temp;
       scanf("%d",&temp);
        if(temp>max)
        {
            max=temp;
            count=0;  
        }
        if(temp==max)
            count++;
    }
    printf("%d",count);
    return 0;
}
