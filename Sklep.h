//
// Created by michal on 01.01.2023.
//

#ifndef ZALICZENIOWY_SKLEP_H
#define ZALICZENIOWY_SKLEP_H
#include <vector>
#include "Towar.h"
#include "J_Handlowa.h"
#include "Siec.h"
#include "Mieszkaniec.h"
#include <tuple>
using namespace std;

class Sklep:public J_Handlowa{
private:
    //+marża jako atrybut w przypadku dziedziczenia z klasy Sieć
    vector<Towar*> towary = {};
    Siec* siec;
    float x,y;
    // settery
    void ustaw_Siec(Siec* S);
public:
    Sklep& operator+=(Towar* t);
    bool sprzedaj_Towar(string nazwa, unsigned int ilosc); //zmniejsza ilosc towaru
    float uwzglednij_marze(float stara_cena);


//    bool sprzedaj_najdro_Towar();

    tuple<string, float, unsigned int> sprawdz_Towar(string nazwa);
    tuple<string, float, unsigned int> daj_najdrozszy();
    tuple<string, float, unsigned int> daj_najtanszy();
    tuple<string, float, unsigned int> daj_losowy();


    void wypisz_stan();

    //gettery
    float daj_x() const{return x;}
    float daj_y() const {return y;}
    Siec* daj_siec() const {return siec;}

    bool czy_w_Sieci();
    bool czy_Siec(){return true;}

    void ustaw_siec(Siec* s){siec = s;}

//    float daj_marze();

    Sklep(float _x, float _y): x(_x),y(_y), siec(nullptr){}


    virtual ~Sklep() = default;

    //techniczne
    Sklep() = default;

    Sklep(const Sklep&) = default;
    Sklep& operator=(const Sklep&) = default;
    Sklep(Sklep&&) = default;
    Sklep& operator=(Sklep&&) = default;


};


#endif //ZALICZENIOWY_SKLEP_H
