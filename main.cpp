#include <iostream>
#include "include/classifica.h"
using namespace std;
classifica_t classifica[10];
classifica_t add_name;
int main() {
    char choice;
    topset(classifica); //con questa funzione azzero la classifica (messa qui almeno non viene pulita
    // ogni volta ma solo ad inizio programma)
    bool end = false; // dichiaro questa variabile falsa in modo che il while
    // sotto si riproduca finchè l'untente non la imposta su falsa
    do {
        cout<< "Premere 'A' per aggiungere membri alla top, premere 'S' per mostrare la classifica,'E' per uscire\n";
        cin>> choice;
        switch (choice) {
            /* ho messo uno switch che permette all'utente se vedere la classifica
            o semplicemente aggiungere un'altro utente oppure il primo alla classifica
             chiedendo prima il nome dell'utente da inserire e poi quanti punti ha.
             poi la funzione topreorder la inserisce nella classifica sempre se puù starci
             (cioè ha il punteggio minimo)
            */
            case 'a':
                cout<< "aggiungere nome:";
                cin>> add_name.nome;
                cout << "aggiungere punteggio:";
                cin>> add_name.punteggio;
                topreorder(add_name, classifica);
                break;
            case 's':
                topshow(classifica); //con s di show viene richiamata la funzione mostra top
                break;
            case 'e':
                end = true; //qui imposta la variabile dichiarata prima del do while su vera cosi termina il ciclo e il programma
                break;
            default: // lo ho messo perché non si sa mai se uno non legge la legenda dei comandi :)
                cout<< "non è tra le opzioni\n";
                break;
        }
    } while (!end);
    return 0;
}