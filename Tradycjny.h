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
    Sklep* znajdz_najbliz();

public:
    bool kup();
    void wypisz_stan();

    Tradycjny(float _x, float _y, double _budzet, string _szukany_T): Poszukiwacz(_budzet, _x, _y, _szukany_T){}

    Tradycjny(const Tradycjny&) = delete;
    Tradycjny& operator=(const Tradycjny&) = delete;// kopiowanie obiektu
    ~Tradycjny() = default;
    Tradycjny(Tradycjny&&) = delete;
    Tradycjny& operator=(Tradycjny&&) = delete;
};


#endif //ZALICZENIOWY_TRADYCJNY_H
