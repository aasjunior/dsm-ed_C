#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int m[6][6], x, y, op, aux, distancia=0;
    char v[6][10];

    printf("**************Cadastro das cidades**********************\n\n");
    for(x=0; x<6; x++){
        printf("Digite a cidade: ");
        scanf("%s", v[x]);
    }

    printf("\n**************Distância entre as cidades****************\n\n");
    for(x=0; x<6; x++){
        for(y=0; y<6; y++){
            printf("Digite a distância entre %s e %s: ", v[x], v[y]);
            scanf("%d", &m[x][y]);
        }
    }
    y = 1;
    for(int cont=0; cont<6; cont++){
        printf("Informe a %dª cidade visitada: ", y);
        printf("\n0 - %s\n1 - %s\n2 - %s\n3 - %s\n4 - %s\n5 - %s\n",v[0],v[1],v[2],v[3],v[4],v[5]);
        scanf("%d",&op);
        if(cont==0){
            distancia = distancia + m[op][op];
            aux = op;
        }else{
            distancia = distancia + m[aux][op];
            aux = op;
        }
        y++;
    }

    printf("A distância percorrida é %d", distancia);
    return 0;
}
