#include "Aplicatie.h"
#include "Carte.h"
#include "Carte_ilustrata.h"
#include "Carte_educativa.h"
#include "Enciclopedie.h"
#include "Comparare_carti.h"
#include "Sumaelem.h"
#include "Papetarie.h"
#include "Fabrica.h"
#include "Obiecte_pe_care_scrii.h"
#include "Obiecte_de_scris.h"
#include "Manual.h"
#include "Romana.h"
#include<iostream>
#include "memory"
#include "vector"
Aplicatie* Aplicatie::aplicatie = nullptr;

Aplicatie *Aplicatie::getAplicatie() {
    if(aplicatie == nullptr) {
        aplicatie = new Aplicatie();
        std::cout<<"Aplicatie generata";
    }
    return aplicatie;
}

void Aplicatie::printMeniu() {
    std::cout<<"\n--------------\n";
    std::cout<<"MENIU - ALEGETI O OPTIUNE:\n";
    std::cout<<"Pentru a adauga carti, alegeti tasta 1\n";
    std::cout<<"Pentru a afisa carti, alegeti tasta 2\n";
    std::cout<<"Pentru clase si functii template, alegeti tasta 3\n";
    std::cout<<"Pentru exemplificarea sablonului de proiectare Abstract Factory, alegeti tasta 4\n";
    std::cout<<"Pentru metoda clone, alegeti tasta 5\n";
}
std::vector<std::shared_ptr<Carte>>produse;


void Aplicatie::adaugaCarti() {
    int numar;
    std::cout<<"Introduceti numarul de produse pe care doriti sa il adaugati: ";
    std::cin>>numar;

    for(int i = 0; i < numar; i++) {
        int tasta;
        std::cout<<"ALEGETI O OPTIUNE:\n";
        std::cout<<"Carte educativa 1\n";
        std::cout<<"Carte ilustrata 2\n";
        std::cout<<"Enciclopedie 3\n";
        std::cout<<"Introduceti tasta corespunzatoare: ";

        std::cin>>tasta;
        if(tasta == 1) {
                std::string den;
                int p;
                std::cout<<"\n Introduceti denumirea: ";
                std::cin>>den;

                std::cout<<"\n Introduceti pretul: ";
                std::cin>>p;

                std::shared_ptr<Carte_educativa>C = std::make_shared<Carte_educativa>(Carte_educativa("a", 1));
                produse.push_back(C);

            } else if(tasta == 2){
                std::string den;
                int p;
                std::cout<<"\n Introduceti denumirea: ";
                std::cin>>den;

                std::cout<<"\n Introduceti pretul: ";
                std::cin>>p;

                std::shared_ptr<Carte_ilustrata> I = std::make_shared<Carte_ilustrata>(Carte_ilustrata("b", 2));
                produse.push_back(I);

            } else if(tasta == 3){
                std::string den;
                int p;
                int v;
                int nr;

                std::cout<<"\n Introduceti denumirea: ";
                std::cin>>den;

                std::cout<<"\n Introduceti pretul: ";
                std::cin>>p;

                std::cout<<"\n Introduceti varsta recomandata: ";
                std::cin>>v;

                std::cout<<"\n Introduceto numarul de imagini: ";
                std::cin>>nr;

                std::shared_ptr<Enciclopedie> E = std::make_shared<Enciclopedie>(Enciclopedie(den, p, nr, v));
                produse.push_back(E);


            }
        }
}

void Aplicatie::afiseazaCarti() {
    std::cout<<"\n\nAfisare: \n";
    for(auto &x:produse) {
        if(typeid(*x) == typeid(Enciclopedie)) {
            //x->afiseazaProdus();
            std::cout<<(*x);
        } else {
            //std::cout << x->getClassId() << " are";
            //x->afiseazaProdus();
            std::cout<<(*x);
            std::cout << "\n";
        }
    }
}

void Aplicatie::calculeazaMaximul() {
    Carte_ilustrata c1("Basme", 2);
    Carte_ilustrata c2("Povesti", 5);
    Comparare_carti<int> Ob1(c1.getPret(), c2.getPret());
    Ob1.aflaMaximul();

    std::cout<<"\n";

    Comparare_carti<std::string> Ob2(c1.getDenumire(), c2.getDenumire());
    Ob2.aflaMaximul();

    Comparare_carti<int> Ob3(c1.getPret(), c2.getPret());
    std::cout<<"\nMinimul este "<<Ob3.aflaMinimul();
    std::cout<<"\n";
    int v[produse.size()];
    int i = 0;
    for(auto &x :produse) {
        v[i] = x->getPret();
        i++;
    }
    Sumaelem<int, 2>S;
    std::cout<<"Suma este: "<<S.aflaSuma(v)<<"\n";
}

void Aplicatie::sablonAF() {
    Fabrica* f = new Obiecte_de_scris();
    Fabrica* f2 = new Obiecte_pe_care_scrii();

    Papetarie* p[5];
    p[0] = f->genereaza_obiecte_auxiliare();
    p[1] = f->genereaza_obiecte_necesare();
    p[2] = f->genereaza_obiecte_auxiliare();
    p[3] = f2->genereaza_obiecte_necesare();
    p[4] = f2->genereaza_obiecte_auxiliare();

    for(auto & i : p) {
        i->afis();
    }
}

void Aplicatie::metodaClone() {
    std::cout<<"Introduceti pretul obiectului pe care doriti sa il cititi: ";
    int p;
    std::cin>>p;
    std::shared_ptr<Manual> x = std::make_shared<Romana>(p);
    x->afisare();
    std::unique_ptr<Manual>copie = x->clone();
    std::cout<<"Copia:\n";
    copie->afisare();
}

