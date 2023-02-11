//
// Created by michal on 02.01.2023.
//

#ifndef ZALICZENIOWY_MAKSYMALISTA_H
#define ZALICZENIOWY_MAKSYMALISTA_H

#include "Wierny.h"

class Maksymalista: public Wierny {
public:
    bool kup();
    void wypisz_stan();
    Maksymalista(Sklep* S, float _x, float _y, double _budzet, string imie): Wierny(S,_budzet , _x, _y, imie){}

    Maksymalista(const Maksymalista&) = delete;
    Maksymalista& operator=(const Maksymalista&) = delete;// kopiowanie obiektu
    ~Maksymalista() = default;
    Maksymalista(Maksymalista&&) = delete;
    Maksymalista& operator=(Maksymalista&&) = delete;
};


#endif //ZALICZENIOWY_MAKSYMALISTA_H
