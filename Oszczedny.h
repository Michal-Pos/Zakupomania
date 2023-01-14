//
// Created by michal on 03.01.2023.
//

#ifndef ZALICZENIOWY_OSZCZEDNY_H
#define ZALICZENIOWY_OSZCZEDNY_H
#include "Poszukiwacz.h"

class Oszczedny: public Poszukiwacz {
    virtual void kup_Towar();

    Oszczedny() = default;
    ~Oszczedny() = default;
};


#endif //ZALICZENIOWY_OSZCZEDNY_H
