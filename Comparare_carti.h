#include<cstring>
#ifndef TEMA3_COMPARARE_CARTI_H
#define TEMA3_COMPARARE_CARTI_H
template<class T>
class Comparare_carti {
private:
    T a;
    T b;

public:
    Comparare_carti(T x, T y):a(x), b(y){};
    void aflaMaximul();
    T aflaMinimul();
};

template<class T>
T Comparare_carti<T>::aflaMinimul() {
    return (a < b) ? a : b;
}

template <typename T>
void Comparare_carti<T>::aflaMaximul() {
    std::cout<<"Template: \n";
    std::cout<<"Maximul dintre cele doua numere este "<<((a > b) ? a : b);
}

template<>
void Comparare_carti<std::string>::aflaMaximul() {
    std::cout<<"Specializare: \n";
    std::cout<<"Prima denumire este "<<a;
    std::cout<<"\nA doua denumire este "<<b;
    std::cout<<"\n Maximul lor este "<<((a > b) ? a : b);
}


#endif //TEMA3_COMPARARE_CARTI_H
