
#ifndef TEMA3_CARTE_EDUCATIVA_H
#define TEMA3_CARTE_EDUCATIVA_H
#include "Carte.h"

class Carte_educativa:public virtual Carte{
public:
    Carte_educativa();

    Carte_educativa(std::string denumire_, int pret_);

    void afiseazaProdus() const override;

    const std::string& getClassId() const override;
};
#endif //TEMA3_CARTE_EDUCATIVA_H
