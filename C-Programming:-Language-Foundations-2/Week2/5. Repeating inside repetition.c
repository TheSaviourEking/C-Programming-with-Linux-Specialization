// MY SOLUTION

#include <stdio.h>

int main(void){
    int n = 0, i = 0, j = 0;
    
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("*");
        }
        printf("\n");
    }
}

// OFFICIAL SOLUTION

#include <stdio.h>
int main() {
    int i, j;
    int n = 0;
    scanf("%d", &n);

    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < n ; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}