#include <stdio.h>
#include <math.h>

int main(){
    int testes;
    scanf("%d",&testes);
    for(int i = 0; i < testes; i++){
        int varetas;
        scanf("%d",&varetas);
        int bolaDeCima[varetas];
        for(int j = 0; j < varetas; j++){
            bolaDeCima[j] = 0;
        }
        int bolaDaVez = 1;
        int total = varetas+1;
        for(int i = 0; i < total; i++){
            for(int j = 0; j < varetas; j++){
                float somafloat = sqrt(bolaDeCima[j] + bolaDaVez);
                int somaint = sqrt(bolaDeCima[j] + bolaDaVez);
                if(somafloat == somaint){
                    bolaDeCima[j] = bolaDaVez;
                    bolaDaVez++, total++;
                    break;
                }
                else if(bolaDeCima[j] == 0){
                    bolaDeCima[j] = bolaDaVez;
                    bolaDaVez++, total++;;
                    break;
                }
            }
        }
        printf("%d\n",bolaDaVez-1);
    }
    return 0;
}