#include <stdio.h>
#define N 10

void stampaArray(int v[]) {
    for(int i = 0; i < N; i++)
        printf("%d ", v[i]);
    printf("\n");
}

void bubbleSortBandiera(int v[]) {
    int ordinato = 0;
    int temp;

    for(int n = N; n > 1 && !ordinato; n--) {
        ordinato = 1;

        for(int i = 0; i < n - 1; i++) {
            if(v[i] > v[i+1]) {
                temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;

                ordinato = 0;


                stampaArray(v);
            }
        }
    }
}

int main() {
    int v[N];

    printf("Inserisci 10 numeri interi:\n");
    for(int i = 0; i < N; i++)
        scanf("%d", &v[i]);

    bubbleSortBandiera(v);

    printf("Array ordinato:\n");
    stampaArray(v);

    return 0;
}