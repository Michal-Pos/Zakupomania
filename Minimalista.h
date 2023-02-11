//
// Created by michal on 02.01.2023.
//

#ifndef ZALICZENIOWY_MINIMALISTA_H
#define ZALICZENIOWY_MINIMALISTA_H
#include "Wierny.h"
#include "Sklep.h"

class Minimalista: public Wierny {
public:
    bool kup();
    void wypisz_stan();
    Minimalista(Sklep* Sk, float _budzet, float _x, float _y, string imie): Wierny(Sk,_budzet, _x, _y, imie){};

    //techniczne
    Minimalista() = delete;
    Minimalista(const Minimalista&) = delete;
    Minimalista& operator=(const Minimalista&) = delete;
    Minimalista(Minimalista&&) = delete;
    Minimalista& operator=(Minimalista&&) = delete;
    ~Minimalista() = default;

};


#endif //ZALICZENIOWY_MINIMALISTA_H
