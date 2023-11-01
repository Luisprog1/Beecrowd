#include <stdio.h>


int main(){
    int p,j1,j2,r,a;
    scanf("%d%d%d%d%d\n",&p,&j1,&j2,&r,&a);
    int soma;
    soma = j2 + j1;
    int resto = soma%2;
    if (p==1 || p==0 && r==1 || r==0 && a==1 || a==0 ){
        if (r == 1){
            if (a == 0){
                printf("Jogador 1 ganha!\n");
            }
            else if(a == 1){
                printf("Jogador 2 ganha!\n");
            }
        }
        else if (r == 0){
            if (a == 1){
                printf("Jogador 1 ganha!\n");
            }
            else if(a == 0){
                if (p == 0){
                    if (resto == 0)
                        printf("Jogador 2 ganha!\n");
                    else
                        printf("Jogador 1 ganha!\n");
                }
                else if (p == 1){
                    if (resto == 0)
                        printf("Jogador 1 ganha!\n");
                    else
                        printf("Jogador 2 ganha!\n");
                }
            }
        }
    }
    return 0;
}