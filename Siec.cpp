//
// Created by michal on 01.01.2023.
//

#include "Siec.h"

//Siec::Siec(float _marza) {
//
//}
tuple<string, float, unsigned int> Siec::sprawdz_Towar(string nazwa) {
    tuple<string , float, int> wynik = make_tuple("", 0, 0);
    return wynik;
}

bool Siec::sprzedaj_Towar(string nazwa, unsigned int ilosc) {
    return true;
}

bool Siec::przejmij_Siec(Siec *S) {
    return true;
}

bool Siec::dodaj_Sklep(Sklep *S) {
    if (czy_Sklep_w_Sieci(S)){
        cout<<"Sklep jest już w sieci"<<endl;
        return false;
    }
    else lista_sklepow.push_back(S);
    cout<<"Do Sieci dodano Sklep, teraz się w niej znajduje: "<<lista_sklepow.size()<<" sklepów"<<endl;
    return true;
}

bool Siec::usun_Sklep(Sklep *S) {
    int i = 0;
    for (Sklep* Sk: lista_sklepow){
        if (Sk==S){
            lista_sklepow.erase(lista_sklepow.begin()+ i);
            return true;
        }
        i+=1;
    }
    return false;
}


bool Siec::czy_Sklep_w_Sieci(Sklep* S) {
    for (Sklep* Sk: lista_sklepow){
        if (Sk==S){
            return true;
        }
    }
    return false;
}