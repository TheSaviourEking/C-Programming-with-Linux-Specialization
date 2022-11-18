#include <stdio.h>

int main(){
    int diceA = 0, diceB = 0, sum = 0, fee = 0;
    
    scanf("%d %d", &diceA, &diceB);
    
    if ( (diceA < 1 || diceA > 6) && (diceB < 1 || diceB > 6)){
        printf("Invalid Values");
    }
    else{
        sum = diceA + diceB;
        if (sum >= 10){
            printf("Special tax\n");
            fee = 36;
            printf("%d", fee);
        }
        else{
            printf("Regular tax\n");
            fee = 2 * sum;
            printf("%d", fee);
        }
    }
    
}