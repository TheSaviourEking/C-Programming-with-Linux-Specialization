#include <stdio.h>

int main(){
    float c;
    float f;
    
    scanf("%f", &c);
    
    f = c * 9.0 / 5.0 + 32.0;
    printf("%.1f", f);
    
    return 0;
}