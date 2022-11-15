#include <stdio.h>

int main(){
    int days = 25 - 23, minutes = 60 * 24 * days, seconds = 60 * minutes;
    printf("Dear Procrastinator,\nYou still have to wait for %d days (%d minutes or %d seconds) before you can procrastinate!", days, minutes, seconds);
    return 0;
}