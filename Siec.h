//
// Created by michal on 01.01.2023.
//

#ifndef ZALICZENIOWY_SIEC_H
#define ZALICZENIOWY_SIEC_H


#include "J_Handlowa.h"
#include "Towar.h"
using namespace std;

class Siec: public J_Handlowa{
private:
    vector<Sklep*> lista_sklepow;
    double marza; //będziemy chcieli aby sklep miał dostęp do wysokości marży
public:
    bool sprawdz_Towar(string nazwa);
    bool sprzedaj_Towar(Mieszkaniec* M, string nazwa, unsigned int ilosc); //będzie zmniejszał budżet mieszkańca oraz zmniejszał ilość towaru odpowiedniego sklepu

    //gettery
    double daj_marza(){return marza;}

    void przejmij_Siec(Siec* S);//przejmuje Sieć wraz ze sklepami
    void dodaj_Sklep(Sklep* S);//wciela Sklep do Sieci
    void usun_Sklep(Sklep* S);//usuwa Sklep z Sieci (Sklep staje się samodzielny)

    //Konstruktor
    explicit Siec(double _marza): marza(_marza){};

    virtual ~Siec() = default;


    //techniczne
    Siec() = default;
    Siec(const Siec&) = default; //kopiujący
    Siec& operator=(const Siec&) = default;
    Siec(Siec&&) = default;
    Siec& operator=(Siec&&) = default;
};


#endif //ZALICZENIOWY_SIEC_H
