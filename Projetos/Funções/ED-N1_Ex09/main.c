#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digite um valor para n:\n");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}

int fibonacci(int n){
    int f[n], x;

    if(n>=0){
        for(x=0; x<=n; x++){
            if(x>1){
                f[x] = f[x-1] + f[x-2];
            }else{
                f[x] = x;
            }
        }
        for(x=0;x<=n;x++){
            printf("F%d = %d ", x, f[x]);
        }
    }else{
        printf("Valor negativo!");
    }

}
