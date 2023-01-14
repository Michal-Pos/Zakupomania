//
// Created by michal on 02.01.2023.
//

#ifndef ZALICZENIOWY_MINIMALISTA_H
#define ZALICZENIOWY_MINIMALISTA_H
#include "Wierny.h"
#include "Sklep.h"

class Minimalista: public Wierny {
private:
    float x,y;
    double budzet;
public:
    Minimalista(Sklep* Sk, float _budzet, float _x, float _y): Wierny(Sk,_budzet, _x, _y){};

    //techniczne
    Minimalista() = default;
    Minimalista(const Minimalista&) = default;
    Minimalista& operator=(const Minimalista&) = default;
    Minimalista(Minimalista&&) = default;
    Minimalista& operator=(Minimalista&&) = default;

};


#endif //ZALICZENIOWY_MINIMALISTA_H
