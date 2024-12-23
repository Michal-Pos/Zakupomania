//
// Created by michal on 03.01.2023.
//

#ifndef ZALICZENIOWY_OSZCZEDNY_H
#define ZALICZENIOWY_OSZCZEDNY_H
#include "Poszukiwacz.h"

class Oszczedny: public Poszukiwacz {
private:
    Sklep* znajdz_najtan();
public:
    bool kup();
    void wypisz_stan();

    Oszczedny(float _x, float _y, double _budzet, string _szukany_T): Poszukiwacz(_budzet, _x, _y, imie, _szukany_T){}

    Oszczedny(const Oszczedny&) = delete;
    Oszczedny& operator=(const Oszczedny&) = delete;// kopiowanie obiektu
    ~Oszczedny() = default;
    Oszczedny(Oszczedny&&) = delete;
    Oszczedny& operator=(Oszczedny&&) = delete;
};


#endif //ZALICZENIOWY_OSZCZEDNY_H
