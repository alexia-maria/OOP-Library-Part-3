#include "Enciclopedie.h"

Enciclopedie::Enciclopedie(std::string denumire_, int pret_, int vrec_, int nrimag_):
        Carte(), Carte_educativa(denumire_, pret_), Carte_ilustrata(denumire_, pret_), vrec(vrec_), nrimag(nrimag_) {};

void Enciclopedie::afiseazaProdus() const {
    std::cout<<" "<<nrimag<<" imagini si este recomandata copiilor incepand cu varsta de "<<vrec<<" ani\n";
}

const std::string &Enciclopedie::getClassId() const {
    static const std::string nume("Enciclopedia");
    return nume;
}