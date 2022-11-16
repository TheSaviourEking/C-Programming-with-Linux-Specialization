#include <stdio.h>

int main(){
    float distance;
    float newd;
    scanf("%f", &distance);
    
    newd = distance* 0.621371;
    
    printf("%.6f", newd);
}

// OR THE BELOW CODE

#include <stdio.h>

int main(void) {

    double distance, milesToKm;

    milesToKm = .621371;

    scanf("%lf", &distance);

    printf("%.6lf", distance * milesToKm);

    return(0);
}
