#include <stdio.h>

int main(){
    int passengers = 0;
    float gas = 0.0;
    
    scanf("%d %f", &passengers, &gas);
    
    float result = 0.0;
    
    if (passengers == 0){
        result = gas;
    }
    else if(passengers >= 1){
        result = (1 + gas)/ (passengers + 1);
    }
    
    printf("%.2lf", result);
}

// OR BELOW CODE DOES SAME THING

#include <stdio.h>
int main() {
    int nbPassengers = 0;
    double totalCost = 0.0;
    scanf("%d %lf", &nbPassengers, &totalCost);
    int alone = nbPassengers == 0;
    if(alone){
        printf("%.2lf", totalCost);
    }else{
        totalCost = totalCost + 1; //car pooling site fees
        printf("%.2lf", totalCost/(nbPassengers+1));
    }
    return 0;
}