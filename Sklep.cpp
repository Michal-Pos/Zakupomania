//
// Created by michal on 01.01.2023.
//

#include "Sklep.h"
#include <string>
#include <iostream>

Sklep::Sklep(float _x, float _y): x(_x),y(_y){}

void Sklep::dodaj_Towar(Towar* T) {
    cout<<"dodano towar "<<T->daj_nazwe()<<endl;
    for (Towar* t: towary){
        if (t->daj_nazwe()==T->daj_nazwe()){
            t->ustaw_ilosc(t->daj_ilosc()+T->daj_ilosc());
            break;
        };
    }
    towary.push_back(T);

}

void Sklep::wypisz_stan() {
    cout<<"----------------------"<<endl;
    cout<<"W sklepie są towary:"<<endl;
    for (Towar* t:towary){
        t->wypisz_stan();
    }
    cout<<"----------------------"<<endl;
}


Towar* Sklep::sprawdz_Towar(string nazwa){
    cout<<"--Sprawdzam sklep dla towaru: "<<nazwa<<"--"<<endl;
    for (Towar* t: towary){
        if (t->daj_nazwe()==nazwa){
            cout<<"W sklepie znajduje się "<< t->daj_nazwe()<<" w ilości "<<t->daj_ilosc()<<endl;
            return t;
        };
    }
    cout<<"W sklepie nie ma "<<nazwa<<endl;
    return nullptr;
}


void Sklep::sprzedaj_Towar(Towar *T) {
    T->ustaw_ilosc(T->daj_ilosc()-1);
}









