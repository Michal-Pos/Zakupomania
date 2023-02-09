//
// Created by michal on 01.01.2023.
//

#include "Sklep.h"
#include <string>
#include <iostream>
#include <cmath>




void Sklep::dodaj_Towar(Towar* T) {
    cout<<"dodano towar "<<T->daj_nazwe()<<" w ilości: "<<T->daj_ilosc()<<endl;
    for (Towar* t: towary){
        if (t->daj_nazwe()==T->daj_nazwe()){
            t->ustaw_ilosc(t->daj_ilosc()+T->daj_ilosc());
            return; //zwiększenie ilości towaru
        };
    }
    towary.push_back(T); //dodanie nowego towaru

}

void Sklep::wypisz_stan() {
    cout<<"----------------------"<<endl;
    cout<<"Sklep: "<<x<<" "<<y<<endl;
    cout<<"Czy w Sieci: ";
    if (siec){
        cout<<"Tak"<<endl;
    } else cout<<"Nie"<<endl;
    cout<<"Zasób Towarów:"<<endl;
    if (!towary.empty()){
        for (Towar* t:towary){
            t->wypisz_stan();
        }
        cout<<"----------------------"<<endl;
    }

}



tuple<string , float, unsigned int> Sklep::sprawdz_Towar(string nazwa){
    cout<<"--Sprawdzam sklep dla towaru: "<<nazwa<<"--"<<endl;
    for (Towar* t: towary){
        if (t->daj_nazwe()==nazwa){
            cout<<"W sklepie znajduje się "<< t->daj_nazwe()<<" w ilości "<<t->daj_ilosc()<<endl;
            tuple<string , float, int> wynik = make_tuple(t->daj_nazwe(), t->daj_cene(), t->daj_ilosc());
            return wynik;
        };
    }
    cout<<"W sklepie nie ma "<<nazwa<<endl;
    tuple<string , float, int> wynik = make_tuple("", 0, 0);
    return wynik;
}


bool Sklep::sprzedaj_Towar(string nazwa, unsigned int ilosc) {
    for (Towar* T: towary){
        if (T->daj_nazwe()==nazwa && T->daj_ilosc()>=ilosc){
            T->ustaw_ilosc(T->daj_ilosc()-ilosc);
            cout<<"Sprzedano "<<nazwa<<" w ilości "<<ilosc<<endl;
            return true;
        }
        cout<<"W sklepie nie ma wystarczającej ilości"<<nazwa<<", obecnie znajduje się"<<ilosc<<endl;
    }
    return false;
}
bool Sklep::czy_w_Sieci() {
    if (siec){
        return true;
    }
    return false;
}
//skończyłeś tutaj
tuple<string, float, unsigned int> Sklep::daj_najdrozszy(){
    if (!towary.empty()){

        Towar* najdr_Towar = towary.front();
        float najw_cena = najdr_Towar->daj_cene();

        for (Towar* T: towary){
            if (T->daj_cene()>najw_cena && T->daj_ilosc()>0){
                najw_cena = T->daj_cene();
                najdr_Towar = T;
            }
        }
        tuple<string, float, unsigned int> najdro = tuple<string, float, unsigned int>(najdr_Towar->daj_nazwe(), najw_cena, najdr_Towar->daj_ilosc());

        return najdro;
    }
    tuple<string, float, unsigned int> najdro = tuple<string, float, unsigned int>("",0,0);
    return najdro;

}

tuple<string, float, unsigned int> Sklep::daj_najtanszy() {
    if (!towary.empty()){

        Towar* najt_Towar = towary.front();
        float najni_cena = najt_Towar->daj_cene();

        for (Towar* T: towary){
            if (T->daj_cene()<najni_cena && T->daj_ilosc()>0){
                najni_cena = T->daj_cene();
                najt_Towar = T;
            }
        }
        tuple<string, float, unsigned int> wynik = tuple<string, float, unsigned int>(najt_Towar->daj_nazwe(), najt_Towar->daj_cene(), najt_Towar->daj_ilosc());

        return wynik;
    }
    tuple<string, float, unsigned int> wynik = tuple<string, float, unsigned int>("",0,0);
    return wynik;
}

tuple<string, float, unsigned int> Sklep::daj_losowy() {

    if (!towary.empty()){
        int random_indeks = rand() % towary.size();
        Towar* T = towary[random_indeks];
        tuple<string, float, unsigned int> wynik = tuple<string, float, unsigned int>(T->daj_nazwe(), T->daj_cene(), T->daj_ilosc());

        return wynik;
    }
    tuple<string, float, unsigned int> wynik = tuple<string, float, unsigned int>("",0,0);
    return wynik;
}





//bool Sklep::sprzedaj_najdro_Towar() {
//    if (!towary.empty()){
//        Towar* najdr_Towar = towary.front();
//        float najdro = najdr_Towar->daj_cene();
//
//        for (Towar* T: towary){
//            if (T->daj_cene()>najdro){
//                najdro = T->daj_cene();
//                najdr_Towar = T;
//            }
//        }
//        najdr_Towar->ustaw_ilosc(najdr_Towar->daj_ilosc() - 1);
//        return true;
//
//    }
//    return false;
//    }


bool Sklep::ustaw_Siec(Siec *S) {
    siec = S;
    cout<<"Sklep "<<x<<" "<<y<<" zmienił Sieć"<<endl;
    return true;
}



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









