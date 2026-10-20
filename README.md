# 🎮 eSports Admin Terminal (C Project)

Un'applicazione console sviluppata in linguaggio C che simula l'interfaccia di un terminale per l'amministrazione di un torneo di eSports. Il programma presenta un menu testuale (stile ASCII art) interattivo, in cui l'utente può inserire comandi tramite singoli caratteri.

Questo progetto è stato ideato come **esercizio didattico** per gli studenti del terzo anno delle scuole superiori (indirizzo Informatica).

## 🎯 Obiettivi Didattici
Questo codice è progettato per dimostrare sul campo i seguenti concetti chiave del C:
- **Ciclo `do-while`:** Creazione di un menu che continua a ripetersi finché non viene soddisfatta la condizione di uscita.
- **Costrutto `switch-case`:** Gestione elegante delle scelte multiple rispetto a una lunga catena di `if/else`.
- **Gestione dell'Input e del Buffer:** Utilizzo dello spazio nella `scanf(" %c")` per consumare in modo sicuro i caratteri invisibili (`\n`, spazi) rimasti nel buffer della tastiera.
- **Libreria `<ctype.h>`:** Utilizzo della funzione `toupper()` per rendere il programma *case-insensitive* (accetta sia 'A' che 'a').

## 💻 Anteprima del Menu

```text
========================================
||      TORNEO eSPORTS - ADMIN        ||
========================================
||                                    ||
||  [A] Aggiungi Squadra              ||
||  [V] Visualizza Tabellone          ||
||  [I] Inizia Partita                ||
||  [S] Statistiche                   ||
||                                    ||
||  [X] Esci dal sistema              ||
||                                    ||
========================================

Seleziona un'opzione: