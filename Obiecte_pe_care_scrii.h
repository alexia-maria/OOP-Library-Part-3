//
// Created by Alexia on 1/5/2023.
//

#ifndef TEMA3_OBIECTE_PE_CARE_SCRII_H
#define TEMA3_OBIECTE_PE_CARE_SCRII_H

#include "Fabrica.h"

class Obiecte_pe_care_scrii: public Fabrica{
public:
    Papetarie* genereaza_obiecte_necesare() override;

    Papetarie* genereaza_obiecte_auxiliare() override;
};
#endif //TEMA3_OBIECTE_PE_CARE_SCRII_H
