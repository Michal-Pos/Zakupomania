//
// Created by michal on 01.01.2023.
//

#ifndef ZALICZENIOWY_SKLEP_H
#define ZALICZENIOWY_SKLEP_H
#include <vector>
#include "Towar.h"
#include "J_Handlowa.h"
#include "Mieszkaniec.h"
#include <tuple>
using namespace std;

class Sklep:J_Handlowa{
private:
    //+marża jako atrybut w przypadku dziedziczenia z klasy Sieć
    vector<Towar*> towary = {};
    Siec* siec = nullptr;
    float x,y;
    // settery
    bool ustaw_Siec(Siec* S);
public:
    bool sprzedaj_Towar(string nazwa, unsigned int ilosc); //zmniejsza ilosc towaru

    bool sprzedaj_najdro_Towar();

    tuple<string, float, unsigned int> sprawdz_Towar(string nazwa);
    tuple<string, float, unsigned int> daj_najdrozszy();
    tuple<string, float, unsigned int> daj_najtanszy();

    friend void dodaj_Siec_Sklep(Siec* Si, Sklep* Sk);
    friend void usun_Siec_Sklep(Siec* Si, Sklep* Sk);


    void dodaj_Towar(Towar* T);
    void wypisz_stan();

    //gettery
    float daj_x() const{return x;}
    float daj_y() const {return y;}

//    float daj_marze();




    Sklep(float _x, float _y): x(_x),y(_y){}


    virtual ~Sklep() = default;

    //techniczne
    Sklep() = default;

    Sklep(const Sklep&) = default;
    Sklep& operator=(const Sklep&) = default;
    Sklep(Sklep&&) = default;
    Sklep& operator=(Sklep&&) = default;


};


#endif //ZALICZENIOWY_SKLEP_H
