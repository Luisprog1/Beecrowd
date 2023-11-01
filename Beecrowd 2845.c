#include <stdio.h>

int main(){
    int n,max = 0;
    scanf("%d\n",&n);
    int a[n];
    int identificador;
    for (int i = 0; i < n; ++i){
        scanf("%d",&identificador);
        a[i] = identificador;
        if (max < identificador){
            max = identificador;
        }
    }
    int coprimo = 0;
    do{
        int x = 0;
        for(int i = 0; i < n; ++i){
            if(max%a[i] !=0){
                x +=1;
            }
        }
        if (n == x){
            coprimo = 1;
            max -=1;
        }
        max +=1;
    }while(coprimo = 0);
    printf("%d\n",max);
    return 0;
}