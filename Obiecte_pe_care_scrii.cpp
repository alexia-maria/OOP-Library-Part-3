#include "Obiecte_pe_care_scrii.h"
#include "Caiet.h"
#include "Foaie.h"
Papetarie *Obiecte_pe_care_scrii::genereaza_obiecte_necesare() {
    return new Foaie();
}

Papetarie *Obiecte_pe_care_scrii::genereaza_obiecte_auxiliare() {
    return new Caiet();
}
