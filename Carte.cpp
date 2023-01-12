#include "Carte.h"
#include<iostream>
Carte::Carte(std::string denumire_, int pret_): denumire(std::move(denumire_)), pret(pret_) {};

Carte::~Carte() = default;

void Carte::afiseazaProdus() const {};

std::string Carte::getDenumire() const{
    return denumire;
}

int Carte::getPret() const{
    return pret;
}

std::ostream& operator<<(std::ostream &os, Carte &c) {
    os<<c.getClassId()<<" are";
    c.afiseazaProdus();

}