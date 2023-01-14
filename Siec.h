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
    Towar* sprawdz_Towar(string nazwa) ;
    void sprzedaj_Towar(Towar* T) ;//będzie zmniejszał budżet mieszkańca oraz zmniejszał ilość towaru odpowiedniego sklepu

    void przejmij_Siec(Siec* S);//przejmuje Sieć wraz ze sklepami
    void dodaj_Sklep(Sklep* S);//wciela Sklep do Sieci
    void usun_Sklep(Sklep* S);//usuwa Sklep z Sieci (Sklep staje się samodzielny)

    //Konstruktor
    Siec(double _marza);


    //techniczne
    Siec() = default;
    Siec(const Siec&) = default; //kopiujący
    Siec& operator=(const Siec&) = default;
    Siec(Siec&&) = default;
    Siec& operator=(Siec&&) = default;
};


#endif //ZALICZENIOWY_SIEC_H
