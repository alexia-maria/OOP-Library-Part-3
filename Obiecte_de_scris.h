//
// Created by Alexia on 1/5/2023.
//

#ifndef TEMA3_OBIECTE_DE_SCRIS_H
#define TEMA3_OBIECTE_DE_SCRIS_H
#include "Fabrica.h"
class Obiecte_de_scris: public Fabrica{
public:
    Papetarie* genereaza_obiecte_necesare() override;

    Papetarie* genereaza_obiecte_auxiliare() override;
};
#endif //TEMA3_OBIECTE_DE_SCRIS_H
