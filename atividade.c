#include <stdio.h>

int main(){
    int dias,custoPorDia;
    while(scanf("%d",&dias)!=EOF){
        scanf("%d",&custoPorDia);
        int receita[dias];
        for(int i = 0; i < dias; i++){
            scanf("%d",&receita[i]);
        }
        int max = 0;
        for(int i = 0; i < dias; i++){
            int lucro = 0;
            for(int j = i; j < dias; j++){
                lucro += receita[j] - custoPorDia;
                if(lucro > max)
                    max = lucro;
            }
        }
        printf("%d\n",max);
    }
    return 0;
}