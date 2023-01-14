//
// Created by michal on 01.01.2023.
//

#include "Towar.h"
#include <string>

//unsigned int Towar::daj_ilosc() const {
//    return 0;
//}
//
//Towar::Towar(unsigned int _ilosc, float _cena) {
//
//}
Towar::Towar(unsigned int _ilosc, float _cena, string _nazwa):ilosc(_ilosc), cena(_cena), nazwa(_nazwa) {
}

void Towar::wypisz_stan(){
        cout<<"nazwa: "<<nazwa<<" ilość: "<<ilosc<<" cena: "<<cena<<endl;
    }
//gettery
unsigned int Towar::daj_ilosc() const {return ilosc;}
float Towar::daj_cene() const {return cena;}
string Towar::daj_nazwe() const {return nazwa;}

//settery
void Towar::ustaw_ilosc(unsigned int n) {this->ilosc=n;}

void Towar::ustaw_cene(float x) {this->cena=x;}



