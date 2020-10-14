#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n, original_grades[100], index, final_grade, remainder[100], next_multiplier[100], quotient[100];
    scanf("%d", &n);
    for(index=0; index<n; index++){
        scanf("%d", &original_grades[index]);
        remainder[index] = original_grades[index] %5;
        quotient[index] = original_grades[index] / 5;
        next_multiplier[index] = (quotient[index] + 1) * 5;
    }
    for(index=0; index<n; index++){
        if(original_grades[index] > 37){
            if((next_multiplier[index] - original_grades[index]) < 3){
                original_grades[index] = next_multiplier[index];
            }
            else if((next_multiplier[index] - original_grades[index]) ==3){
                original_grades[index] = original_grades[index];
            }
        }
        else{
            original_grades[index] = original_grades[index];
        }
        printf("%d\n",original_grades[index]);
    }
    return 0;
}
