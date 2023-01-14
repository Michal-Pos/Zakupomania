//
// Created by michal on 02.01.2023.
//

#ifndef ZALICZENIOWY_MAKSYMALISTA_H
#define ZALICZENIOWY_MAKSYMALISTA_H

#include "Wierny.h"

class Maksymalista: public Wierny {
private:
    float x,y;
    double budzet;
public:

    Maksymalista(float _x, float _y, double _budzet);
    Maksymalista(const Maksymalista&) = default;
    Maksymalista& operator=(const Maksymalista&) = default;// kopiowanie obiektu
    ~Maksymalista() = default;
    Maksymalista(Maksymalista&&) = default;
    Maksymalista& operator=(Maksymalista&&) = default;
};


#endif //ZALICZENIOWY_MAKSYMALISTA_H
