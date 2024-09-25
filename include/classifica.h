//
// Created by Christian on 22/09/2024.
//

#ifndef CLASSIFICA_CLASSIFICA_H
#define CLASSIFICA_CLASSIFICA_H
typedef struct Classifica{ // definisco la struct qui per lasciare il main pulito
    std::string nome;
    int punteggio;
} classifica_t;

void topreorder (classifica_t add_name, classifica_t classifica[]);
void topset (classifica_t classifica[]);
void topshow (classifica_t classifica[]);

#endif //CLASSIFICA_CLASSIFICA_H