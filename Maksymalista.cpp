//
// Created by michal on 02.01.2023.
//

#include "Maksymalista.h"

bool Maksymalista::kup() {
    if (!ulubiony->czy_w_Sieci()){
        tuple<string, float, unsigned int> najdro = ulubiony->daj_najdrozszy();
        string nazwa = get<0>(najdro);
        float cena = get<1>(najdro);
        unsigned int ilosc = get<2>(najdro);
        if (ilosc>0 && cena< budzet){//jeśli Mieszkańca stać na dany przedmiot
            budzet-= cena;
            ulubiony->sprzedaj_Towar(nazwa,1);
            cout<<"Udało się kupić najdroższy towar"<<nazwa <<" w cenie "<<cena<<endl;
            return true;
        };
    }else cout<<"Sklep znajduje się w Sieci, nie mozna w nim kupic towaru"<<endl;
    return false;

}
