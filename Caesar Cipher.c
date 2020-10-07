#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int n, k, i, diff1, diff2, diff, negative[100];
    unsigned char string[100], string2[100];
    scanf("%d",&n);
    scanf("%s",string);
    scanf("%d",&k);
    diff= k%26;
    for(i=0; i<n; i++){
        if(65 <= string[i] && string[i]<= 90){
            string2[i] = string[i] +diff;
            string[i] = string2[i];
            if(string[i] >= 91 ){ 
                diff1 = string[i]-91;
                string[i] = 65 + diff1;
            }
        }
        else if(97 <= string[i] && string[i]<= 122){
            string2[i] = string[i] + diff;
            string[i] = string2[i];
            if(string[i]>122){
                diff2 = string[i] - 123;
                string[i] = 97 + diff2;
            }
        }
    }
    printf("%s",string);
    return 0;
}
