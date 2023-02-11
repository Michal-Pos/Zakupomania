//
// Created by michal on 01.01.2023.
//

#ifndef ZALICZENIOWY_TOWAR_H
#define ZALICZENIOWY_TOWAR_H
#include <string>
#include <iostream>
//#include "Miasto.h"
using namespace std;

class Towar {
private:
    unsigned int ilosc;
    float cena;
    string nazwa;
public:
    //gettery do atrybutów
    unsigned int daj_ilosc() const;
    float daj_cene() const;
    string daj_nazwe() const;

    //settery do ilości i ceny
    void ustaw_ilosc(unsigned int n);
    void ustaw_cene(float x);

    void wypisz_stan();

    Towar(unsigned int _ilosc, float _cena, string _nazwa);


    // techniczne, wszystkie standardowe, nie będziemy mieć żadnych atrybutów bedących listami
    Towar() = delete;
    Towar(const Towar&) = delete;
    Towar& operator=(const Towar&) = delete;// kopiowanie obiektu
    ~Towar() = default;
    Towar(Towar&&) = delete;
    Towar& operator=(Towar&&) = delete;// kopiowanie obiektu przez kopiowane adresu
};


#endif //ZALICZENIOWY_TOWAR_H
