#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int items_ordered, Anna_not_eat, bill[100000], total=0, Anna_charged, index, actual_bill, check_condition;
    scanf("%d %d", &items_ordered, &Anna_not_eat);
    for(index=0; index<items_ordered; index++){
        scanf("%d", &bill[index]);
    }
    scanf("%d", &Anna_charged);
    for(index=0; index<items_ordered; index++){
        total = total+ bill[index];
    }
    total = total - bill[Anna_not_eat];
    actual_bill = total / 2;
    check_condition = Anna_charged - actual_bill;
    //("%d\t",check_condition);
    //printf("%d\n",actual_bill);
    if(check_condition == 0){
        printf("Bon Appetit\n");
    }
    else{
        printf("%d\n",check_condition);
    }
    return 0;
}
