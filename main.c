#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(){

    int horas = 0;
    int mnts = 295;

    while(mnts > 10){
        mnts = mnts - 59;
        horas++;
        printf("Agora sao %dh e %imin\n", horas, mnts);
    }
    return 0;
}