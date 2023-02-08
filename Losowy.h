//
// Created by michal on 02.01.2023.
//

#ifndef ZALICZENIOWY_LOSOWY_H
#define ZALICZENIOWY_LOSOWY_H
#include <stdlib.h>     /* srand, rand */
#include "Wierny.h"
#include "Towar.h"


class Losowy: public Wierny {
private:
    unsigned int proby = 3;
public:
    bool kup();
    void wypisz_stan();
    Losowy(Sklep* S, float _x, float _y, double _budzet): Wierny(S,_budzet , _x, _y){}

    Losowy(const Losowy&) = default;
    Losowy& operator=(const Losowy&) = default;// kopiowanie obiektu
    ~Losowy() = default;
    Losowy(Losowy&&) = default;
    Losowy& operator=(Losowy&&) = default;
};


#endif //ZALICZENIOWY_LOSOWY_H
