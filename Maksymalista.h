//
// Created by michal on 02.01.2023.
//

#ifndef ZALICZENIOWY_MAKSYMALISTA_H
#define ZALICZENIOWY_MAKSYMALISTA_H

#include "Wierny.h"

class Maksymalista: public Wierny {
public:
    bool kup(Sklep* S);
    Maksymalista(Sklep* S, float _x, float _y, double _budzet): Wierny(S,_budzet , _x, _y){}

    Maksymalista(const Maksymalista&) = default;
    Maksymalista& operator=(const Maksymalista&) = default;// kopiowanie obiektu
    ~Maksymalista() = default;
    Maksymalista(Maksymalista&&) = default;
    Maksymalista& operator=(Maksymalista&&) = default;
};


#endif //ZALICZENIOWY_MAKSYMALISTA_H
