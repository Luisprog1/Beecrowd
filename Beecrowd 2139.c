#include <stdio.h>

int main(){
    int dia,mes,subtracao,somarDia;
    int diasMeses[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    while(scanf("%d%d", &mes, &dia) != EOF){
        somarDia = dia;
        subtracao = 360;
        if (dia <= diasMeses[mes-1]){
            if (mes == 12 && dia == 25){
                printf("E natal!\n");
            }
            else if (mes == 12 && dia == 24){
                printf("E vespera de natal!\n");
            }
            else if (mes == 12 && dia > 25){
                printf("Ja passou!\n");
            }
            else{
                for (int i = 0; i < (mes-1); i++){
                    somarDia += diasMeses[i];
                }
            subtracao -= somarDia;
            printf("Faltam %d dias para o natal!\n",subtracao);
            }
        }
    }
    return 0;
}