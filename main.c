#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(){

    int horas = 0;
    int mnts = 120;

    if(mnts > 59){
        horas = horas + 1;
        mnts = mnts - 59;
    }

    printf("Agora sao %dh e %imin\n", horas, mnts);
    
    return 0;
}