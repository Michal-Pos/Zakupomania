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
    virtual void kup_Towar(Towar* T){};

    Mieszkaniec(double _budzet, float _x, float _y);

    Mieszkaniec(const Mieszkaniec&) = default;
    Mieszkaniec& operator=(const Mieszkaniec&) = default;
    virtual ~Mieszkaniec(){};
    Mieszkaniec(Mieszkaniec&&) = default;
    Mieszkaniec& operator=(Mieszkaniec&&) = default;
};


#endif //ZALICZENIOWY_MIESZKANIEC_H
