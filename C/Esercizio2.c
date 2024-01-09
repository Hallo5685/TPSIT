//
#include <stdio.h>
int main() {
    float totale, sconto, prezzoNetto;
    char risposta;
f
    //ciclo do while per poter inserire altre spese
    do {
        // Input dell'importo
        printf("Inserisci l'importo: ");
        scanf("%f", &totale);

        while(totale <= 0 )
        {
            printf("Valore inserito non valido, inserirlo nuovamente:  ");
            scanf("%f", &totale);
        }

        if (totale > 0 && totale <= 500) {
            sconto = totale * 0.1;
        } else if (totale >= 501 && totale <= 1000) {
            sconto = totale * 0.2;
        } else {
            sconto = totale * 0.3;
        }

        
        prezzoNetto = totale - sconto;

        
        printf("Sconto: %.2f\n", sconto);
        printf("Prezzo netto: %.2f\n", prezzoNetto);

        
        printf("Vuoi inserire un'altra somma? (s/n): ");
        scanf(" %c", &risposta);

    } while (risposta == 's' || risposta == 'S');

    return 0;
}