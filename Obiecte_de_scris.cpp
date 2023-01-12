#include "Obiecte_de_scris.h"
#include "Pix.h"
#include "Stilou.h"
Papetarie *Obiecte_de_scris::genereaza_obiecte_necesare() {
    return new Pix();
}

Papetarie *Obiecte_de_scris::genereaza_obiecte_auxiliare() {
    return new Stilou();
}
