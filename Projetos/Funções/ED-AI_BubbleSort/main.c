#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[] = {12,56,92,34,70,9,88}, n = 7;

    bubbleSort(v,n);
    return 0;
}

int bubbleSort(int v[], int n){
    int aux;
    for(int x=0; x<n; x++){
        for(int y=0; y<n-1; y++){
            if(v[y]>v[y+1]){
                aux = v[y];
                v[y] = v[y+1];
                v[y+1] = aux;
            }
        }
    }

    for(int x=0; x<n; x++){
        printf("%d ", v[x]);
    }
}
