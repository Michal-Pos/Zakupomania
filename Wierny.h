//
// Created by michal on 01.01.2023.
//

#ifndef ZALICZENIOWY_WIERNY_H
#define ZALICZENIOWY_WIERNY_H
#include "Mieszkaniec.h"
#include "Sklep.h"

class Wierny: public Mieszkaniec{
protected:
    Sklep* ulubiony;
    float x, y;
    double marza;
public:
//    void kup_Towar(string nazwa);
    Wierny(Sklep* Sk,double _budzet , float _x, float _y): Mieszkaniec(_budzet,_x,_y), ulubiony(Sk){}

    Wierny(const Wierny&) = default;
    Wierny& operator=(const Wierny&) = default;
    virtual ~Wierny(){};
    Wierny(Wierny&&) = default;
    Wierny& operator=(Wierny&&) = default;

};


#endif //ZALICZENIOWY_WIERNY_H
