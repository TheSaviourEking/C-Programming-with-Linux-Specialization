#include <stdio.h>


int main(void){
    int quanIngre[10], id = 0, i = 0;
    
    for (i = 0; i < 10; i++){
        scanf("%d", &quanIngre[i]);
    }
    scanf("%d", &id);
    
    printf("%d", quanIngre[id]);
    
    return 0;
}

