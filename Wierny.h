//
// Created by michal on 01.01.2023.
//

#ifndef ZALICZENIOWY_WIERNY_H
#define ZALICZENIOWY_WIERNY_H
#include "Sklep.h"

class Wierny: public Mieszkaniec{
protected:
    Sklep* ulubiony;
public:
//    void kup_Towar(string nazwa);
    Wierny(Sklep* Sk,double _budzet , float _x, float _y, string imie): Mieszkaniec(_budzet,_x,_y, imie), ulubiony(Sk){}

    Wierny(const Wierny&) = delete;
    Wierny& operator=(const Wierny&) = delete;
    virtual ~Wierny()= default;
    Wierny(Wierny&&) = delete;
    Wierny& operator=(Wierny&&) = delete;

};


#endif //ZALICZENIOWY_WIERNY_H
