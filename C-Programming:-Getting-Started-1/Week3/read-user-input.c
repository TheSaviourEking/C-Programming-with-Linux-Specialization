#include <stdio.h>

int main(){
    int multiple;
    int number = 0;
    int i;
    
    scanf("%d", &multiple);
    
    for (i = 0; i < 11; i++){
        printf("%dx%d = %d\n", number, multiple, number * multiple);
        number = number + 1;
    }

    return 0;
}