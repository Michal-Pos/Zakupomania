//
// Created by michal on 03.01.2023.
//

#ifndef ZALICZENIOWY_OSZCZEDNY_H
#define ZALICZENIOWY_OSZCZEDNY_H
#include "Poszukiwacz.h"
#include "Miasto.h"

class Oszczedny: public Poszukiwacz {
private:
    Sklep* znajdz_sklep(Miasto *M);
public:
    bool kup();
    void wypisz_stan();

    Oszczedny(float _x, float _y, double _budzet, string _szukany_T): Poszukiwacz(_budzet, _x, _y, _szukany_T){}

    Oszczedny(const Oszczedny&) = default;
    Oszczedny& operator=(const Oszczedny&) = default;// kopiowanie obiektu
    ~Oszczedny() = default;
    Oszczedny(Oszczedny&&) = default;
    Oszczedny& operator=(Oszczedny&&) = default;
};


#endif //ZALICZENIOWY_OSZCZEDNY_H
