#include <stdio.h>
#include <string.h>

const char *s1 = "suco de laranja";
const char *s2 = "morango fresco";
const char *s3 = "mamao";
const char *s4 = "goiaba vermelha";
const char *s5 = "manga";
const char *s6 = "laranja";
const char *s7 = "brocolis";

int definirNome(char nome[20]){
    char c;
    int i = 0;
    while ((c = getchar()) != '\n'){
        nome[i++] = c;
    }
    nome[i] = '\0';
}

int main(){
    int t = 0;
    while(scanf("%d",&t) != EOF){
        if (t != 0 ){
            char alimento[20];
            int n,vitamina = 0;
            for (t; t != 0; t--){
                scanf("%d\n",&n);
                definirNome(alimento);
                if(strcmp(alimento,s1)==0){
                    vitamina += n * 120;
                }
                else if(strcmp(alimento,s2)==0){
                    vitamina += n * 85;
                }
                else if(strcmp(alimento,s3)==0){
                    vitamina += n * 85;
                }
                else if(strcmp(alimento,s4)==0){
                    vitamina += n * 70;
                }
                else if(strcmp(alimento,s5)==0){
                    vitamina += n * 56;
                }
                else if(strcmp(alimento,s6)==0){
                    vitamina += n * 50;
                }
                else if(strcmp(alimento,s7)==0){
                    vitamina += n * 34;
                }
            }
            if(vitamina < 110){
                printf("Mais %d mg\n", 110 - vitamina);
            }
            else if(vitamina > 130){
                printf("Menos %d mg\n", vitamina- 130);
            }
            else{
                printf("%d mg\n", vitamina);
            }
        }
    }
    return 0;
}