//
// Created by michal on 02.01.2023.
//

#ifndef ZALICZENIOWY_TRADYCJNY_H
#define ZALICZENIOWY_TRADYCJNY_H
#include "Poszukiwacz.h"
#include "Miasto.h"

class Tradycjny: public Poszukiwacz{
private:
    float odleglosc(float x_sklepu, float y_sklepu);
    Sklep* znajdz_najbliz(Miasto* M);
public:
    bool kup();

    Tradycjny(float _x, float _y, double _budzet, string _szukany_T): Poszukiwacz(_budzet, _x, _y, _szukany_T){}

    Tradycjny(const Tradycjny&) = default;
    Tradycjny& operator=(const Tradycjny&) = default;// kopiowanie obiektu
    ~Tradycjny() = default;
    Tradycjny(Tradycjny&&) = default;
    Tradycjny& operator=(Tradycjny&&) = default;
};


#endif //ZALICZENIOWY_TRADYCJNY_H
