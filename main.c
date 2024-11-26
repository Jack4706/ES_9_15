#include <stdio.h>
#include "appartenenzaRetta.h"


int main() {
    float m, q, x, y;

    printf("inserisci il coefficiente angolare:\n");
    scanf("%f", &m);

    printf("inserisci la quota:\n");
    scanf("%f", &q);

    printf("inserisci la coordinata x del punto:\n");
    scanf("%f", &x);

    printf("inserisci la coordinata y del punto:\n");
    scanf("%f", &y);

    if(appartenenzaRetta(m, q, x, y)) {
        printf("il punto appartiene alla retta");
    }
    else {
        printf("il punto non appartiene alla retta");
    }


    return 0;
}
