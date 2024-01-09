#include <stdio.h>

int main()
{
	int N, numero;
    int sommaPari = 0, sommaDispari = 0;
    int contPari = 0, contDispari = 0;
	
	
    printf("Inserisci il quantitativo di numeri che vorresti inserire: ");
    scanf("&d \n", & N);
    
    while(N<=0||N<=30)
	{
		printf("Il numero inserito non è valido, ri inserire numero: ");
		scanf("&d", & N);
	}
    
    for(int i = 0; i < N; ++i)
	{
		printf("Inserisca un numero: ");
		scanf("&d", &NCaso);
		
		 if (numero % 2 == 0) {
            sommaPari += numero;
            contPari++;
        } else {
            sommaDispari += numero;
            contDispari++;
        }
    }
    
    printf("\nLa Somma dei numeri pari: %d\n", sommaPari);
	printf("\n La Somma dei numeri disapri: %d\n", sommaDispari);
	
	
    return 0;
}
