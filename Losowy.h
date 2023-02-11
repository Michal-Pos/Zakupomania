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
    Losowy(Sklep* S, double _budzet, float _x, float _y,  string imie): Wierny(S,_budzet , _x, _y, imie){}

    Losowy(const Losowy&) = delete;
    Losowy& operator=(const Losowy&) = delete;// kopiowanie obiektu
    ~Losowy() = default;
    Losowy(Losowy&&) = delete;
    Losowy& operator=(Losowy&&) = delete;
};


#endif //ZALICZENIOWY_LOSOWY_H
