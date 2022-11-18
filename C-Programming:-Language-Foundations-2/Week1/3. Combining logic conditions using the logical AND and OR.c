#include <stdio.h>

int main(void){
    int age = 0, weight = 0, price = 0;
    
    scanf("%d %d", &age, &weight);
    
    if (age == 60){
        price = 0;
    }
    else if(age < 10){
        price = 5;
    }
    else{
        price = 30;
        if (weight > 20){
            price = 30 + 10;
        }
    }
    
    printf("%d", price);
    
    return 0;
}