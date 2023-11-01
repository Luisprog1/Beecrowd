#include <stdio.h>

int main(){
    int a1,a2,a3;
    scanf("%d\n%d\n%d",&a1, &a2, &a3);
    int minutos1=0,minutos2=0,minutos3=0;
    minutos1 += a2 * 2;
    minutos1 += a3 * 4;
    minutos2 += a1 * 2;
    minutos2 += a3 * 2;
    minutos3 += a1 * 4;
    minutos3 += a2 * 2;
    int menor = minutos1;
    if (menor > minutos2){
        menor = minutos2;
        if (menor > minutos3){
            menor = minutos3;
        }
    }
    else if (menor > minutos3){
        menor = minutos3;
    }
    printf("%d\n",menor);
    return 0;
}