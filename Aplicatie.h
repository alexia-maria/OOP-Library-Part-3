
#ifndef TEMA3_APLICATIE_H
#define TEMA3_APLICATIE_H
class Aplicatie {
private:
    static Aplicatie* aplicatie;
    Aplicatie() = default;

public:
    ~Aplicatie() = default;

    static Aplicatie* getAplicatie();

    static void startAplicatie();

    static void printMeniu();

    void adaugaCarti();
    void afiseazaCarti();

    void calculeazaMaximul();

    void sablonAF();

    void metodaClone();
};
#endif //TEMA3_APLICATIE_H
