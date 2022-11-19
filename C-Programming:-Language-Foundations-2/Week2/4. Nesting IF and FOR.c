// MY SOLUTION

#include <stdio.h>

int main(void){
    int noCity = 0, pop[10] = {0}, i = 0, noBig = 0;
    
    scanf("%d", &noCity);
    
    for (i = 0; i < noCity; i++){
        scanf("%d", &pop[i]);
        if (pop[i] > 10000){
            noBig++;
        }
        
    }
    
    printf("%d", noBig);
    
    return 0;
}

// OFFICIAL SOLUTION

#include <stdio.h>

int main(void){
    int nbCities;
    scanf("%d", &nbCities);
    int nbBigCities = 0;
    for(int i = 0; i < nbCities ; i++)
    {
        int population;
        scanf("%d", &population);
        if(population > 10 * 1000)
        {
            nbBigCities = nbBigCities + 1;
        }
    }
    printf("%d", nbBigCities);
    return 0;
}