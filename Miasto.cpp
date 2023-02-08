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
bool Miasto::dodaj_J_Handlowa(J_Handlowa *JH) {
    for (J_Handlowa* jh: lista_handlowych){
        if (jh==JH){
            cout<<"Ta Jednostka Handlowa znajduje się już na liście jednostek, nie nastąpi żadna zmiana w liście"<<endl;
            return false; //zwiększenie ilości towaru
        };
    }
    cout<<"Jednostka została dodana do listy"<<endl;
    lista_handlowych.push_back(JH); //dodanie nowego towaru
    return true;
}

void Miasto::wypisz_stan() {
    cout<<"*******************"<<endl;
    cout<<"W mieście znajduje się: "<<endl;
    cout<<lista_mieszkancow.size()<<" mieszkańcow"<<endl;
    int sk = 0;
    int si = 0;
    for (J_Handlowa* JH:lista_handlowych){
        if(JH->czy_Siec()){
            si+=1;
        }else si+=1;
    }
    cout<<si<<" Sieci"<<endl;
    cout<<sk<<" samodzielnych Sklepów"<<endl;
    cout<<"*******************"<<endl;



}
