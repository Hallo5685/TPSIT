//
#include <stdio.h>

int numeroPrimo(int numero) {
    int primo = 1;

    if(numero < 0)
        numero = numero * (-1);

    if(numero == 0 || numero == 1)
        primo = 1;
    else {
        for(int i = 2; i < numero && primo; i++){
            if(numero % i == 0) 
                primo = 0;
        }
    }

    return primo;
}

int main(void) {
    int numeroInserito;
    int stampareNumero = 1;

    do {
        printf("Inserire il numero di arrivo : ");
        scanf("%d", &numeroInserito);

        if(numeroInserito <= 0)
            printf("Errore : il numero inserito deve essere positivo");
    } while(numeroInserito <= 0);

    for(int i = 0; i <= numeroInserito; i++){
        if(numeroPrimo(i) && stampareNumero)
            printf("Il numero %d e' primo\n", i);

        stampareNumero = !stampareNumero;
    }
}