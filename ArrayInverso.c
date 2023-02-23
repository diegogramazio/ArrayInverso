#include <stdio.h>

/* Programma che legge una sequenza di interi introdotta dall'utente e
 * crea e stampa la sequenza inversa di quella letta. */
 int main() {
       int lunghezza;           // lunghezza della sequenza

       /* leggi la lunghezza della sequenza */
       printf("Caro utente, quanti numeri vuoi introdurre?\n");
       scanf("%d", &lunghezza);

       /*leggi la sequenza */
       int sequenza[lunghezza];
       for(int i=0; i<lunghezza; i++) {
             printf("Caro utente, introduci un numero.\n");
             scanf("%d", &sequenza[i]);
       }

       /* crea la sequenza inversa */
       int inversa[lunghezza];
       for(int i=0; i<lunghezza; i++)
             inversa[i]=sequenza[lunghezza-i-1];

       printf("Ecco la sequenza inversa: ");
       for(int i=0; i<lunghezza; i++)
            printf("%d ", inversa[i]);
            system("PAUSE");
 }
