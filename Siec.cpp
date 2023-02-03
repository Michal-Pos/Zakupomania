//
// Created by michal on 01.01.2023.
//

#include "Siec.h"
bool Sklep::ustaw_Siec(Siec *S) {
    return false;
}
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
    if (czy_Sklep_w_Sieci(S)) cout<<"Sklep jest już w sieci"<<endl;
    return true;
}

bool Siec::usun_Sklep(Sklep *S) {
    return true;

}

bool Siec::czy_Sklep_w_Sieci(Sklep* S) {
    return (count(lista_sklepow.begin(), lista_sklepow.end(), S));
}