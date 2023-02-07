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
    vector<Sklep*> lista_sklepow;
    double marza; //będziemy chcieli aby sklep miał dostęp do wysokości marży
    bool dodaj_Sklep(Sklep* S);//wciela Sklep do Sieci
    bool usun_Sklep(Sklep* S);//usuwa Sklep z Sieci (Sklep staje się samodzielny)

public:
    //gettery
    double daj_marza() const {return marza;}
    // metody
    friend bool przejmij_Siec(Siec* S_przejmujaca,Siec* S_przejmowana);//przejmuje Sieć wraz ze sklepami
    bool czy_Sklep_w_Sieci(Sklep* S);
    tuple<string, float, unsigned int> sprawdz_Towar(string nazwa);
    bool sprzedaj_Towar(string nazwa, unsigned int ilosc); //będzie zmniejszał budżet mieszkańca oraz zmniejszał ilość towaru odpowiedniego sklepu

    //Konstruktor
    Siec(double _marza): marza(_marza){};
    virtual ~Siec() = default;

    //techniczne
    Siec() = default;
    Siec(const Siec&) = default; //kopiujący
    Siec& operator=(const Siec&) = default;
    Siec(Siec&&) = default;
    Siec& operator=(Siec&&) = default;
    friend void dodaj_Siec_Sklep(Siec* Si, Sklep* Sk);
    friend void usun_Siec_Sklep(Siec* Si, Sklep* Sk);

};



#endif //ZALICZENIOWY_SIEC_H
