#include <stdio.h>

int main(){
    int r,b,c;
    int x,y;
    int n;
    scanf("%d\n", &n);
    for (int i = 1; i <= n; i++){
        scanf("%d%d",&x,&y);
        r =  (pow(3*x, 2) + pow(y,2));
        b = (2 * pow(x,2) + pow(5*y, 2));
        c = ((-100 * x) + pow(y,3));
        int max = r;
        if (max < b){
            max = b;
            if (max < c){
                printf("Carlos ganhou\n");
            }
            else
                printf("Beto ganhou\n");
        }
        else if (max < c){
            printf("Carlos ganhou\n");
        }
        else
            printf("Rafael ganhou\n");
    }
    return 0;
}