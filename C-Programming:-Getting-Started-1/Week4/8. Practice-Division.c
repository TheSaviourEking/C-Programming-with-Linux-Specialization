#include <stdio.h>

int main(void) {
    int current, futureInt;
    double growth, futureDoub;
    
    scanf("%d", &current);
    scanf("%lf", &growth);
    futureDoub = current * (1 + growth / 100);
    futureInt = (int) futureDoub;
    printf("%d", futureInt);
    return(0);
}

// OR USE THE BELOW OPTION, THE BOTH DO THE SAME THING

#include <stdio.h>

int main(){
    int init;
    double growth;
    int pop;
    
    scanf("%d %lf", &init, &growth);
    pop = (int)(init * (1 + growth/100)*1);
    
    printf("%d", pop);
    
}