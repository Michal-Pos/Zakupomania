//
// Created by michal on 01.01.2023.
//

#include "Sklep.h"
#include <string>
#include <iostream>



void Sklep::dodaj_Towar(Towar* T) {
    cout<<"dodano towar "<<T->daj_nazwe()<<" w ilości: "<<T->daj_ilosc()<<endl;
    for (Towar* t: towary){

        if (t->daj_nazwe()==T->daj_nazwe()){
            t->ustaw_ilosc(t->daj_ilosc()+T->daj_ilosc());
            return;
        };
    }
    towary.push_back(T);

}

void Sklep::wypisz_stan() {
    cout<<"----------------------"<<endl;
    cout<<"W sklepie są towary:"<<endl;
    if (!towary.empty()){
        for (Towar* t:towary){
            t->wypisz_stan();
        }
        cout<<"----------------------"<<endl;
    }

}


bool Sklep::sprawdz_Towar(string nazwa){
    cout<<"--Sprawdzam sklep dla towaru: "<<nazwa<<"--"<<endl;
    for (Towar* t: towary){
        if (t->daj_nazwe()==nazwa){
            cout<<"W sklepie znajduje się "<< t->daj_nazwe()<<" w ilości "<<t->daj_ilosc()<<endl;
            return true;
        };
    }
    cout<<"W sklepie nie ma "<<nazwa<<endl;
    return false;
}

bool Sklep::sprzedaj_Towar(string nazwa, unsigned int ilosc) {
    return false;
}

bool Sklep::ustaw_Siec(Siec *S) {
    this->siec = S;
    return true;
}



//float Sklep::daj_marze() {
//    if (siec){
//        return siec->daj_marza();
//    }
//    return 0;
//}

//Towar* Sklep::daj_Towar(string nazwa){
//    if (sprawdz_Towar(nazwa)){
//
//    }
//}
//
//double Sklep::daj_naleznosc(string nazwa){
//    if (sprawdz_Towar(nazwa)){
//        if (siec){
//
//        }
//    }
//}
//
//
//
//bool Sklep::sprzedaj_Towar(Mieszkaniec* M, string nazwa, unsigned int ilosc) {
//    for (Towar* T: towary){
//        if (T->daj_nazwe()==nazwa){
//            if (T->daj_ilosc()>=ilosc){
//                if (M->daj_budzet())
//                cout<<"Wysłano: "<< T->daj_nazwe()<<" w ilości "<<ilosc<<endl;
//                T->ustaw_ilosc(T->daj_ilosc()-ilosc);
//            } else
//                cout<<"W sklepie nie ma pożądanej ilości"<< T->daj_nazwe()<<". Obecna ilość"<<ilosc<<endl;
//
//
//
//        };
//    }
//    cout<<"W sklepie nie ma "<<nazwa<<endl;
//    return false;
//
//}









