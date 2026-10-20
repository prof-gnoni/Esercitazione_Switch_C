#include <stdio.h>
#include <ctype.h> // Per la funzione toupper()

int main() {
    char scelta;

    do {
        // Stampa del Menu "ASCII"
        printf("\n");
        printf("========================================\n");
        printf("||      TORNEO eSPORTS - ADMIN        ||\n");
        printf("========================================\n");
        printf("||                                    ||\n");
        printf("||  [A] Aggiungi Squadra              ||\n");
        printf("||  [V] Visualizza Tabellone          ||\n");
        printf("||  [I] Inizia Partita                ||\n");
        printf("||  [S] Statistiche                   ||\n");
        printf("||                                    ||\n");
        printf("||  [X] Esci dal sistema              ||\n");
        printf("||                                    ||\n");
        printf("========================================\n");
        printf("\nSeleziona un'opzione: ");

        // Lo spazio in " %c" consuma newline residui e spazi bianchi
        scanf(" %c", &scelta);

        // Convertiamo la scelta in maiuscolo per facilitare i controlli
        scelta = toupper(scelta);

        // Costrutto switch per gestire le opzioni
        switch (scelta) {
            case 'A':
                printf("\n>>> AZIONE: Hai scelto di aggiungere una nuova squadra.\n");
                break;
            case 'V':
                printf("\n>>> AZIONE: Stampa del tabellone in corso...\n");
                break;
            case 'I':
                printf("\n>>> AZIONE: MATCH INIZIATO! Prepararsi al drop.\n");
                break;
            case 'S':
                printf("\n>>> AZIONE: Calcolo KD ratio e statistiche in corso...\n");
                break;
            case 'X':
                printf("\n>>> AZIONE: Chiusura terminale. Arrivederci!\n");
                break;
            default:
                printf("\n>>> ERRORE: Scelta non valida. Riprova!\n");
                break; // Il break qui è opzionale ma buona pratica
        }

    } while (scelta != 'X');

    return 0;
}