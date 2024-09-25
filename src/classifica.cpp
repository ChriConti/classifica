//
// Created by Christian on 22/09/2024.
//
#include <iostream>
#include "../include/classifica.h"
using namespace std;

void topreorder (classifica_t add_name, classifica_t classifica[]){
    // ho tenuto gli stessi nomi delle variabili
    // sia qui che nel main per comodità mia

    int position = 9;
    while (position >= 0 && classifica[position].punteggio < add_name.punteggio) { // cerca la posizione di dove il nuovo utente può essere inserito per punteggio
        position--;
    }
    position++;

    if (position >= 10) { // se non è neanche in top 10 non fa niente e termina la funzione
        return;
    }

    for (int i = 8; i >= position; i--) { // scala la classifica in base a dove è la posizione trovata in precedenza
        classifica[i + 1] = classifica[i];
    }

    classifica[position] = add_name; //salva i dati alla posizione iniziale
}

void topset (classifica_t classifica[]){ //funzione che pulisce la classifica
    for(int i=0; i<10; i++) {
        classifica[i].punteggio= 0;
        classifica[i].nome = " ";
    }
}

void topshow (classifica_t classifica[]) { //funzione che mostra la classifica
    cout << "Classifica attuale:\n";
    for (int i = 0; i < 10; i++) {
        if (classifica[i].punteggio > 0) { //solo se maggiore di 0 cosi non mostra la classifica inizializzata vuota
            cout << i + 1 << ". " << classifica[i].nome
                 << " - punteggio: " << classifica[i].punteggio << endl;
        }
    }
}