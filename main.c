#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(){

    int horas = 0;
    int mnts = 180;

    while(mnts > 59){
        if(mnts > 0){
            mnts = mnts - 59;
            horas++;
            printf("Agora sao %dh e %imin\n", horas, mnts);
        }else{
            mnts = mnts * (-1);
        }
    }
    return 0;
}