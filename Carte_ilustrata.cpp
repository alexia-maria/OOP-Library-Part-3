#include "Carte_ilustrata.h"

Carte_ilustrata::Carte_ilustrata(std::string denumire_, int pret_): Carte(denumire_, pret_){};

void Carte_ilustrata::afiseazaProdus() const {
    std::cout<<" denumirea "<<getDenumire()<<" si pretul "<<getPret();
}

const std::string &Carte_ilustrata::getClassId() const {
    static const std::string nume("Carte ilustrata");
    return nume;
}
