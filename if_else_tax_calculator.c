
#include <stdio.h>

int main() {
    
    float income;
    if(scanf("%f",&income)!=1){
        printf("Invalid");
        return 0;
    }
    float taxable_amount;
    float tax;
    int flag=1;
    if(income>=0 && income<=250000){
        tax=0;
    }
    else if(income>250000 && income<=500000){
        taxable_amount=(income-250000);
        tax= taxable_amount * 5/100;
    }
    else if(income>500000 && income<=1000000){
        taxable_amount=(income-500000);
        tax= 12500 + (taxable_amount * 20/100);
    }
    else if(income>1000000){
        taxable_amount=(income-1000000);
        tax= 100000 + 12500 + (taxable_amount * 30/100);
    }
    else{
        printf("INVALID");
        flag = 0;
    }
    
    if(flag==1){
        printf("%.2f",tax);
    }
    
    return 0;
}