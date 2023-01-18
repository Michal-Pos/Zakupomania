//
// Created by michal on 01.01.2023.
//

#ifndef ZALICZENIOWY_SKLEP_H
#define ZALICZENIOWY_SKLEP_H
#include <vector>
#include "Towar.h"
#include "J_Handlowa.h"
using namespace std;

class Sklep:J_Handlowa{
private:
    //+marża jako atrybut w przypadku dziedziczenia z klasy Sieć
    vector<Towar*> towary;
    Siec* siec;
    float x,y;
public:
    Towar* sprawdz_Towar(string nazwa);
    void sprzedaj_Towar(Towar* T) ; //zmniejsza ilosc towaru
    void dodaj_Towar(Towar* T);


    Sklep(float _x,float _y);
    void wypisz_stan();
    virtual ~Sklep();

    //techniczne
    Sklep() = default;

    Sklep(const Sklep&) = default;
    Sklep& operator=(const Sklep&) = default;
    Sklep(Sklep&&) = default;
    Sklep& operator=(Sklep&&) = default;
};


#endif //ZALICZENIOWY_SKLEP_H
