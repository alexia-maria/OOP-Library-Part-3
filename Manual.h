//
// Created by Alexia on 1/9/2023.
//

#ifndef TEMA3_MANUAL_H
#define TEMA3_MANUAL_H
#include<memory>
class Manual {
public:
   // Manual() = default;

    virtual void schimbaPretul(int p) = 0;

    //static Manual *Creeaza(int id);

    virtual void afisare();

    virtual std::unique_ptr<Manual> clone() const = 0;

    virtual ~Manual() = default;
};
#endif //TEMA3_MANUAL_H
