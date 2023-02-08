//
// Created by michal on 01.01.2023.
//

#include "Miasto.h"

bool Miasto::dodaj_Mieszkanca(Mieszkaniec* M) {
    for (Mieszkaniec* m: lista_mieszkancow){
        if (m==M){
            cout<<"Ten Mieszkaniec znajduje się już na liście mieszkańcow,  nie nastąpi żadna zmiana w liście"<<endl;
            return false; //zwiększenie ilości towaru
        };
    }
    cout<<"Mieszkaniec został dodany do listy"<<endl;
    lista_mieszkancow.push_back(M); //dodanie nowego towaru
    return true;
}
bool Miasto::dodaj_sklep(Sklep *SK) {
    for (Sklep* sk: lista_sklepow){
        if (sk==SK){
            cout<<"Ten sklep znajduje się już na liście sklepów, nie nastąpi żadna zmiana w liście"<<endl;
            return false; //zwiększenie ilości towaru
        };
    }
    cout<<"Jednostka została dodana do listy"<<endl;
    lista_sklepow.push_back(SK); //dodanie nowego towaru
    return true;
}

void Miasto::wypisz_stan() {
    cout<<"*******************"<<endl;
    cout<<"W mieście znajduje się: "<<endl;
    cout<<"mieszkańcow: "<<lista_mieszkancow.size()<<endl;
    cout<<"Sklepów: "<<lista_sklepow.size()<<endl;
    cout<<"*******************"<<endl;



}
