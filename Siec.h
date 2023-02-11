//
// Created by michal on 01.01.2023.
//

#ifndef ZALICZENIOWY_SIEC_H
#define ZALICZENIOWY_SIEC_H


#include "J_Handlowa.h"
#include "Sklep.h"
#include "Towar.h"
using namespace std;

class Siec: public J_Handlowa{
private:
    vector<Sklep*> lista_sklepow = {};
    double marza; //będziemy chcieli aby sklep miał dostęp do wysokości marżyusuniecie
public:
    //gettery
    double daj_marza() const {return marza;}
    // metody
    Siec& operator+=(Sklep* sk);//wciela Sklep do Sieci
    Siec& operator-=(Sklep* sk);//usuwa Sklep z Sieci (Sklep staje się samodzielny)


    Siec& operator+=(Siec* si);


    bool czy_Sklep_w_Sieci(Sklep* S);
    tuple<string, float, unsigned int> sprawdz_Towar(string nazwa);
    float uwzglednij_marze(float stara_cena);

    tuple<string , float, unsigned int> sprawdz_Towar(Sklep *S, string nazwa, unsigned int ilosc);
    bool sprzedaj_Towar(Sklep* S, string nazwa, unsigned int ilosc); //będzie zmniejszał budżet mieszkańca oraz zmniejszał ilość towaru odpowiedniego sklepu
    bool czy_Siec(){return true;}
    void wypisz_stan();

    //Konstruktor
    Siec(double _marza): marza(_marza){};

    //techniczne
    Siec(const Siec&) = delete; //kopiujący
    virtual ~Siec();
//    Siec& operator=(const Siec&) = delete;
    Siec(Siec&&) = delete;
    Siec& operator=(Siec&&) = delete;

};



#endif //ZALICZENIOWY_SIEC_H
