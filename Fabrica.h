
#ifndef TEMA3_FABRICA_H
#define TEMA3_FABRICA_H
#include "Papetarie.h"

class Fabrica{
public:
    virtual Papetarie* genereaza_obiecte_necesare() = 0;
    virtual Papetarie* genereaza_obiecte_auxiliare() = 0;
};
#endif //TEMA3_FABRICA_H
