#include <stdio.h>

int main(){
    char input;
    int i;
    int j;
    
    scanf("%c", &input);
    
    for (i = 0; i < 5; i++){
        for(j = 0; j < 9; j++){
          printf("%c", input);  
          input++;
        }
        printf("\n");
        
    }
    
    return 0;
}

// OR YOU COULD USE THE CODE BELLOW

#include <stdio.h>

int main(void) {

    char l;

    scanf("%c", &l);

    printf("++++%c++++\n", l);
    printf("+++%c%c%c+++\n", l, l, l);
    printf("++%c%c%c%c%c++\n", l, l, l, l, l);
    printf("+%c%c%c%c%c%c%c+\n", l, l, l, l, l, l, l);
    printf("%c%c%c%c%c%c%c%c%c\n", l, l, l, l, l, l, l, l, l);

    return(0);
}