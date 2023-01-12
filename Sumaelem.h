
#ifndef TEMA3_SUMAELEM_H
#define TEMA3_SUMAELEM_H
template<class T, int dim>
class Sumaelem{
public:
T aflaSuma( T vect[dim]);
};

template<class T, int dim>
T Sumaelem<T, dim>::aflaSuma(T vect[dim]) {
        T s(0);
        for(int i = 0; i < dim; i++) {
            s = s + vect[i];
        }
        return s;
}
#endif //TEMA3_SUMAELEM_H
