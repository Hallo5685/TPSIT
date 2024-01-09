
#include<stdio.h>
int main () 
{
    int qnumeri,num, sommapiu, sommameno, contatorepiu, contatoremeno, mediapiu, mediameno;  

    //inserimento del quantitativo di numeri 
    printf("Quanti numeri desidera inserire? ");
    scanf("%d", & qnumeri);

    //ciclo for che permetterà di inserrie il quantitativo precedentemente scelto di qualsiasi tipologia di numero
    for(int i = 0; i < qnumeri; i++)
        {
            printf("\nAdessi inserisca tranquillamente numeri positivi e negativi: ");
            scanf("%d", &num);
            
            //incremento del contatore e aggiunta del numero alla somma +
            if(num >0)
            {
                sommapiu += num;
                contatorepiu ++;
            }
            //incremento del contatore e aggiunta del numero alla somma -
            else if(num <0 )
            {
                sommameno += num;
                contatoremeno ++;
            }
          
        }

    sommameno = sommmameno *-1;

    //stampo dei risultati finali
    prinf("\nI numeri positivi inseriti sono: ", contatorepiu);
    prinf("\nI numeri negativi inseriti sono: ", contatoremeno);
    prinf("\nLa somma dei numeri positivi è: ", sommapiu);
    prinf("\nLa somma dei numeri negativi è: ", sommameno);

    return 0;
}
