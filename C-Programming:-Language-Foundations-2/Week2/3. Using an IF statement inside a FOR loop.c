#include <stdio.h>

int main(void){
    int noIngre = 0, i = 0 ;
    double price[10] = {0}, weight[10] = {0}, arrSum[10] = {0}, total = 0;
    
    scanf("%d", &noIngre);
    
    if (noIngre > 10){
        printf("Invalid Ingredients");
        //break;
    }
    
    for (i = 0; i < noIngre; i++){
        scanf("%lf", &price[i]);
    }
    
    for (i = 0; i < noIngre; i++){
        scanf("%lf", &weight[i]);
    }
    
    for (i = 0; i < noIngre; i++){
        arrSum[i] = price[i] * weight[i];
        total += arrSum[i];
    }
    
    printf("%lf", total);
    
    return 0;
}

// USING OFFICIAL SOLUTION

#include <stdio.h>

int main()
{
    int nbIngredients=0;
    int i, idIngredient;
    double price[10];
    double totalPrice = 0.0;
    double readPrice=0.0;

    scanf("%d", &nbIngredients);

    for(i = 0; i < nbIngredients; i++){
        scanf("%lf",&readPrice);
        price[i] = readPrice;
    }

    for (idIngredient = 0; idIngredient < nbIngredients; idIngredient++)
    {
        double quantity;
        scanf("%lf\n",&quantity);
        totalPrice = totalPrice + price[idIngredient] * quantity;
    }
    printf("%lf\n",totalPrice);

    return 0;
}
