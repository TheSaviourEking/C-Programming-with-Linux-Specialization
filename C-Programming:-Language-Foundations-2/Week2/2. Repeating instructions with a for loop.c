#include <stdio.h>

int main(void){
    int noCars = 0, i =0;
    double weights[10], totalWeight = 0, baseWeight = 0, sol[10];
    
    scanf("%d", &noCars);
    
    for (i = 0; i< noCars; i++){
        scanf("%lf", &weights[i]);
        totalWeight += weights[i];
    }
    
    baseWeight = (totalWeight / (double)noCars);
    

    for (i = 0; i< noCars; i++){
    if (weights[i] >= baseWeight){
        sol[i] = baseWeight - weights[i];
    }
    else if( weights[i] <= baseWeight){
        sol[i] = baseWeight - weights[i];
    }
    else{
        printf("invalid weight");
    }
        
    }
    
    for (i = 0; i< noCars; i++){
        printf("%.1lf\n", sol[i]);
    }
    
    
    
    
    
    return 0;
}

// OR OFFICIAL SOLUTION BY DARTMOUTH COLLEGE

#include <stdio.h>

int main(void)
{
    int nbBoxCars, carNumber;
    double weights[50];
    double totalWeight = 0.0;
    double averageWeight;
    
    scanf("%d\n",&nbBoxCars);
    for (carNumber = 0; carNumber < nbBoxCars; carNumber = carNumber + 1)
    {
        scanf("%lf",&weights[carNumber]);
        totalWeight = totalWeight + weights[carNumber];
    }

    averageWeight = totalWeight / nbBoxCars;

    for (carNumber = 0; carNumber < nbBoxCars; carNumber = carNumber + 1)
    {
        printf("%.1lf\n",averageWeight - weights[carNumber]);
    }
    return 0;
}