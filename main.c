#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(){

    int dias = 0;
    int horas = 0;
    int mnts = 18000;

    while(mnts > 59){
        if(mnts > 0){
            mnts = mnts - 59;
            horas++;
            printf("Agora sao %dh e %imin, %i dias\n", horas, mnts, dias);
        }else{
            mnts = mnts * (-1);
        }

        if(horas > 23){
            horas = 0;
            dias++;
        }
    }
    return 0;
}