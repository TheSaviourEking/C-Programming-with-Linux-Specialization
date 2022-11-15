#include <stdio.h>

int main(){
    
    int i = 0;
    int multiple = 8;
    int number = 0;
    
    for (i = 0; i < 11; i++){
        printf("%dx%d = %d\n", number, multiple, number * multiple);
        number = number + 1;
    }
    
    return 0;
}