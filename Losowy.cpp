//
// Created by michal on 02.01.2023.
//

#include "Losowy.h"

bool Losowy::kup() {
    if (!ulubiony->czy_w_Sieci()){//sprawdzanie czy Sklep znajduje się w Sieci (do przepisania)
        for (int i =0; i<proby; i++){
            tuple<string, float, unsigned int> losowy = ulubiony->daj_najdrozszy();
            string nazwa = get<0>(losowy);
            float cena = get<1>(losowy);
            unsigned int ilosc = get<2>(losowy);
            if (ilosc>0 && cena< budzet){//jeśli Mieszkańca stać na dany przedmiot
                budzet-= cena;
                ulubiony->sprzedaj_Towar(nazwa,1);
                cout<<"Udało się kupić towar"<<nazwa <<" w cenie "<<cena<<endl;
            };

        }
        return true;
//
    }else cout<<"Sklep znajduje się w Sieci, nie mozna w nim kupic towaru"<<endl;
    return false;
}

void Losowy::wypisz_stan() {
    cout<<"Losowy "<<x<<" "<<y<<" "<<budzet<<endl;
}
