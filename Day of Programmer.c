#include<stdio.h>
#include<stdlib.h>
int main(){
    int year, day=0, month=9, date[7];
    scanf("%d", &year);
    if(year > 1918){
        if( year%400==0 || year %4==0 && year %100 !=0){
            printf("12.09.%d", year);
        }
        else{
            printf("13.09.%d",year);
        }
    }
    else if(year < 1918){
        if(year%400==0 || year %4==0){
            printf("12.09.%d", year);
        }
        else {
            printf("13.09.%d", year);
        }
    }
    else{
        printf("26.09.%d", year);
    }
    //printf("%d.0%d.%d",day,month,year);
    return 0;
}

