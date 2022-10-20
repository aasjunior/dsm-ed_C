#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[6]={-5,3,2,9,2,2}, i, j=4, valores=0;

    for(i=0;i<j;i++){
        if(vet[i]==2){
            valores=valores+2;
        }
    }

    printf("%i%i \n", valores, i);

    for(i=0;i<6;i++){
        vet[i]=j;
        j=j-1;
    }

    for(i=0;i<6;i++){
        printf("%i", vet[i]);
    }

    printf("\n");

    for(i=0;i<3;i++){
        vet[i]=0;
    }

    for(i=0;i<6;i++){
        printf("%i", vet[i]);
    }

    return 0;
}
