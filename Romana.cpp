#include "Romana.h"
#include "Manual.h"
#include<memory>
Romana::Romana(int pret_):pret(pret_){};

void Romana::schimbaPretul(int p) {pret = p;}

std::unique_ptr<Manual> Romana::clone() const {
    return std::make_unique<Romana>(*this);
}

void Romana::afisare() {
    std::cout<<"Manualul de romana are pretul "<<pret<<" \n";
}

