
#include "Aplicatie.h"
#include<iostream>

void Aplicatie::startAplicatie() {
    unsigned int optiune = 0;
    Aplicatie* app = Aplicatie::getAplicatie();

    do {
        Aplicatie::printMeniu();
        std::cout<<"Introduceti numarul optiunii: ";
        std::cin>>optiune;

        switch(optiune) {
            case 1:{
                app->adaugaCarti();
                break;
            }

            case 2:{
                app->afiseazaCarti();
                break;
            }

            case 3:{
                app->calculeazaMaximul();
                break;
            }

            case 4:{
                app->sablonAF();
                break;
            }

            case 5:{
                app->metodaClone();
                break;
            }

            case 0:{
                std::cout<<"Iesire din aplicatie\n";
            }

            default:{
                std::cout<<"Nu exista optiunea aleasa";
            }
        }
    }while(optiune != 0);
}
int main() {
    Aplicatie::startAplicatie();
}