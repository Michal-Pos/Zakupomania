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
    Towar* sprawdz_Towar(string nazwa);
    void sprzedaj_Towar(Towar* T);


    J_Handlowa() = default;
    J_Handlowa(const J_Handlowa&) = default;
    J_Handlowa& operator=(const J_Handlowa&) = default;
    virtual ~J_Handlowa() = default;
    J_Handlowa(J_Handlowa&&) = default;
    J_Handlowa& operator=(J_Handlowa&&) = default;


};


#endif //ZALICZENIOWY_J_HANDLOWA_H
