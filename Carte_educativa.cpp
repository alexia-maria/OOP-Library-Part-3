#include "Carte_educativa.h"
Carte_educativa::Carte_educativa(std::string denumire_, int pret_): Carte(denumire_, pret_){};

void Carte_educativa::afiseazaProdus() const {
    std::cout<<" denumirea "<<getDenumire()<<" si pretul "<<getPret();
}

const std::string &Carte_educativa::getClassId() const {
    static const std::string nume("Carte educativa");
    return nume;
}

