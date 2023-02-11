//
// Created by michal on 01.01.2023.
//

#ifndef ZALICZENIOWY_MIESZKANIEC_H
#define ZALICZENIOWY_MIESZKANIEC_H
#include <string>
#include "Towar.h"


class Mieszkaniec{
protected:
    float x,y;
    double budzet;
public:
    virtual bool kup() = 0;

    double daj_budzet() const {return budzet;}

    Mieszkaniec(double _budzet, float _x, float _y): budzet(_budzet), x(_x), y(_y){};

    Mieszkaniec(const Mieszkaniec&) = delete;
    Mieszkaniec& operator=(const Mieszkaniec&) = delete;
    virtual ~Mieszkaniec() = default;
    Mieszkaniec(Mieszkaniec&&) = delete;
    Mieszkaniec& operator=(Mieszkaniec&&) = delete;
};


#endif //ZALICZENIOWY_MIESZKANIEC_H
