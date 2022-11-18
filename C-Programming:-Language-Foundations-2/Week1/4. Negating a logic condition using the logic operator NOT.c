#include <stdio.h>
#include <string.h>

int main(void){
    
    int height = 0, noOfLeaflets = 0;
    char tree[10];
    
    scanf("%d %d", &height, &noOfLeaflets);
    
    if (height <= 5 && noOfLeaflets >= 8){
        strcpy(tree, "Tinuviel");
    }
    
    else if (height >= 10 && noOfLeaflets >= 10){
        strcpy(tree, "Calaelen");
       // printf("")
    }
    
    else if (height <= 8 && noOfLeaflets <= 5){
        strcpy(tree, "Falarion");
    }
    
    else if (height >= 12 && noOfLeaflets <= 7){
        strcpy(tree, "Dorthonion");
    }
    else{
        strcpy(tree, "uncertain");
        
    }
    
    printf("%s", tree);
    
    return 0;
}

// OR BELOW CODE, DOES THE SAME THING

#include <stdio.h>
int main() {
    int height = 0;
    int nbLeaflets = 0;
    scanf("%d %d", &height, &nbLeaflets);
    int tinuviel = height <= 5 && nbLeaflets >= 8;
    int calaelen = height >= 10 && nbLeaflets >= 10;
    int falarion = height <= 8 && nbLeaflets <= 5;
    int dorthonion = height >= 12 && nbLeaflets <= 7;
    if(tinuviel) {
        printf("Tinuviel");
    }
    if(calaelen){
        printf("Calaelen");
    }
    if(falarion){
        printf("Falarion");
    }
    if(dorthonion){
        printf("Dorthonion");
    }
    if(!tinuviel && !calaelen && !falarion && !dorthonion){
        printf("Uncertain");
    }
    return 0;
}