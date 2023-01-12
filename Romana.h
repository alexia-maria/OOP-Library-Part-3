//
// Created by Alexia on 1/9/2023.
//

#ifndef TEMA3_ROMANA_H
#define TEMA3_ROMANA_H
#include "Manual.h"
#include<iostream>
class Romana:public Manual{
    int pret;

public:
    explicit Romana(int pret_);

    void schimbaPretul(int p) override;

    std::unique_ptr<Manual> clone() const override;

    void afisare() override;

};
#endif //TEMA3_ROMANA_H
