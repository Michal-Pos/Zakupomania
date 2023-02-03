//
// Created by michal on 14.01.2023.
//

#ifndef ZALICZENIOWY_J_HANDLOWA_H
#define ZALICZENIOWY_J_HANDLOWA_H
#include "Towar.h"
#include <vector>
#include <string>

class Siec;
class Sklep;
class J_Handlowa {
public:
    virtual bool sprawdz_Towar(string nazwa)=0;
    virtual void sprzedaj_Towar(Towar* T)=0;


    J_Handlowa() = default;
    J_Handlowa(const J_Handlowa&) = delete;
    J_Handlowa& operator=(const J_Handlowa&) = delete;
    virtual ~J_Handlowa(){};
    J_Handlowa(J_Handlowa&&) = delete;
    J_Handlowa& operator=(J_Handlowa&&) = delete;


};


#endif //ZALICZENIOWY_J_HANDLOWA_H
