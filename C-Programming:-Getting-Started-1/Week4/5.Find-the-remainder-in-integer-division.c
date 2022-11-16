#include <stdio.h>

int main(){
    int box;
    int matches;
    
    scanf("%d %d", &box, &matches);
    
    printf("%d\n", box / matches);
    printf("%d", box % matches);
    
    return 0;
}