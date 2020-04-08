#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MaxElem 10

void lerVetor(float n[], int nElem){
    int i = 0;
    while(i<nElem){
        scanf("%f",&n[i]);
        i++;
    }
}

void somarVetores(float x[], float y[], float z[], int nElem){
    int i = 0;
    while(i<nElem){
        z[i] = x[i] + y[i];
        i++;
    }
}

void mostrarVetor(float vetor[], int nElem){
    int i = 0;

    while(i<nElem){
        printf("[%d] = %.2f\n", i,vetor[i]);
        i++;
    }
}

int iguais(float x[], float y[], int nElem){
    int i = 0;
    while(i<nElem){
        if(x[i] == y[i]){
            i++;
        }else{
            return 0;
            break;
        }
        return 1;
    }

    /*int i;
    for(i=0; i<=n-1 && x[i] == y[i]; i++);
        return i==n;
    */
}

void copiarVetores(float x[], float y[], int nElem){
    int i = 0;

    while(i<nElem){
        y[i] = x[i];
        i++;
    }
}
int main(){

    setlocale(LC_ALL, "");

    float x[MaxElem], y[MaxElem], z[MaxElem];
    int nElem;

    printf("Quantos elementos? ");
    scanf("%d", &nElem);

    if(nElem>MaxElem) nElem = MaxElem;

    printf("\nLeitura dos valores do vetor x\n");
    lerVetor(x, nElem);

    printf("\nLeitura dos valores do vetor y\n");
    lerVetor(y, nElem);

    somarVetores(x, y, z, nElem);
    printf("\nOs valores do vetor são:\n");
    mostrarVetor(z, nElem);

    if(iguais(x, y, nElem))
        printf("\nOs vetores são iguais\n");
    else{
        copiarVetores(x, y, nElem);
        printf("\nOs vetores ficaram iguais\n");
    }

    printf("\nVetor x\n");
    mostrarVetor(x, nElem);
    printf("\nVetor y\n");
    mostrarVetor(y, nElem);


    return 0;
}
