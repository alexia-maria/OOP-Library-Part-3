//
// Created by Alexia on 1/4/2023.
//

#ifndef TEMA3_CARTE_H
#define TEMA3_CARTE_H
#include<iostream>
class Carte {
    std::string denumire;
    int pret;

public:
    Carte() = default;
    Carte(std::string denumire_, int pret_);

    virtual void afiseazaProdus() const = 0;

    virtual ~Carte();

    std::string getDenumire() const;

    int getPret() const;

    virtual const std::string& getClassId() const = 0;

    friend std::ostream& operator<<(std::ostream &os, Carte &c);
};
#endif //TEMA3_CARTE_H
