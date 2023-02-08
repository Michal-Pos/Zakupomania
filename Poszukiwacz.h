//
// Created by michal on 02.01.2023.
//

#ifndef ZALICZENIOWY_POSZUKIWACZ_H
#define ZALICZENIOWY_POSZUKIWACZ_H
#include "Mieszkaniec.h"

class Poszukiwacz: public Mieszkaniec{
protected:
    string szukany_T;
public:
    virtual bool kup() = 0;
    Poszukiwacz(double _budzet , float _x, float _y, string _szuka_T): Mieszkaniec(_budzet,_x,_y), szukany_T(_szuka_T){}

    Poszukiwacz(const Poszukiwacz&) = default;
    Poszukiwacz& operator=(const Poszukiwacz&) = default;
    virtual ~Poszukiwacz(){};
    Poszukiwacz(Poszukiwacz&&) = default;
    Poszukiwacz& operator=(Poszukiwacz&&) = default;
};


#endif //ZALICZENIOWY_POSZUKIWACZ_H
