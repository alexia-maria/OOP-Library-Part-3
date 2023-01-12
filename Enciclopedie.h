//
// Created by Alexia on 1/4/2023.
//

#ifndef TEMA3_ENCICLOPEDIE_H
#define TEMA3_ENCICLOPEDIE_H
#include "Carte_educativa.h"
#include "Carte_ilustrata.h"
class Enciclopedie:public Carte_educativa, public Carte_ilustrata{
    int nrimag;
    int vrec;
public:
    Enciclopedie(std::string denumire_, int pret_, int nrimag_, int vrec_);

    void afiseazaProdus() const override;

    const std::string& getClassId() const override;
};
#endif //TEMA3_ENCICLOPEDIE_H
