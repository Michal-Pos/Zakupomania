//
// Created by michal on 01.01.2023.
//

#ifndef ZALICZENIOWY_SKLEP_H
#define ZALICZENIOWY_SKLEP_H
#include <vector>
#include "Towar.h"
#include "J_Handlowa.h"
#include "Mieszkaniec.h"
using namespace std;

class Sklep:J_Handlowa{
private:
    //+marża jako atrybut w przypadku dziedziczenia z klasy Sieć
    vector<Towar*> towary = {};
    Siec* siec = nullptr;
    float x,y;
public:
    bool sprawdz_Towar(string nazwa);
    bool sprzedaj_Towar(Mieszkaniec* M, string nazwa, unsigned int ilosc); //zmniejsza ilosc towaru
    void dodaj_Towar(Towar* T);
    void wypisz_stan();

    //gettery
    float daj_x() const{return x;}
    float daj_y() const {return y;}
//    float daj_marze();


    // settery
    bool ustaw_Siec(Siec* S);


    Sklep(float _x, float _y): x(_x),y(_y){}


    virtual ~Sklep() = default;

    //techniczne
    Sklep() = default;

    Sklep(const Sklep&) = default;
    Sklep& operator=(const Sklep&) = default;
    Sklep(Sklep&&) = default;
    Sklep& operator=(Sklep&&) = default;
    friend void dodaj_Siec_Sklep(Siec* Si, Sklep* Sk);
    friend void usun_Siec_Sklep(Siec* Si, Sklep* Sk);

};


#endif //ZALICZENIOWY_SKLEP_H
