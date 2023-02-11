//
// Created by michal on 02.01.2023.
//

#ifndef ZALICZENIOWY_POSZUKIWACZ_H
#define ZALICZENIOWY_POSZUKIWACZ_H
#include "Mieszkaniec.h"
#include "Miasto.h"


class Poszukiwacz: public Mieszkaniec{
protected:
    string szukany_T;
public:
    virtual bool kup() = 0;
    Poszukiwacz(double _budzet , float _x, float _y, string imie, string _szuka_T): Mieszkaniec(_budzet,_x,_y, imie), szukany_T(_szuka_T){}

    Poszukiwacz(const Poszukiwacz&) = delete;
    Poszukiwacz& operator=(const Poszukiwacz&) = delete;
    virtual ~Poszukiwacz() = default;
    Poszukiwacz(Poszukiwacz&&) = delete;
    Poszukiwacz& operator=(Poszukiwacz&&) = delete;
};


#endif //ZALICZENIOWY_POSZUKIWACZ_H
