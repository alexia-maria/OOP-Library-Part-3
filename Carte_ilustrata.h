//
// Created by Alexia on 1/4/2023.
//

#ifndef TEMA3_CARTE_ILUSTRATA_H
#define TEMA3_CARTE_ILUSTRATA_H
#include "Carte.h"

class Carte_ilustrata:public virtual Carte{
public:
    Carte_ilustrata();

    Carte_ilustrata(std::string denumire_, int pret_);

    void afiseazaProdus() const override;

    const std::string& getClassId() const override;

};
#endif //TEMA3_CARTE_ILUSTRATA_H
