#include <stdio.h>

int main(){
    int n, num;
    scanf("%d\n", &n);
    if (1 <= n && n <= 10000){
        for (int i = 1; i <= n; i++){
            scanf("%d", &num);
            num = num + 1;
            int primo = 0;
            for (int i = 1; i > num/2; i++){
                if(primo == num%i){
                    primo = primo + 1;
                }
            }
            if(num%7 == 0 && num%2 !=0 && primo == 0){
                printf("Yes\n");
            }
            else
                printf("No\n");
        }
    }
    else
    return 0;
}