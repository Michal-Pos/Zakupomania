//
// Created by michal on 01.01.2023.
//

#include "Siec.h"

//Siec::Siec(float _marza) {
//
//}
bool Siec::sprawdz_Towar(string nazwa) {
    return false;
}

bool Siec::sprzedaj_Towar(Mieszkaniec* M, string nazwa, unsigned int ilosc) {
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