//
// Created by michal on 02.01.2023.
//

#include "Minimalista.h"

bool Minimalista::kup() {
    cout<<"Rozpoczęto kupowanie dla klienta Minimalista "<<x<<" "<<y<<endl;
    if(!ulubiony->czy_w_Sieci()){
        tuple<string, float, unsigned int> najtan = ulubiony->daj_najtanszy();
        string nazwa = get<0>(najtan);
        float cena = get<1>(najtan);
        unsigned int ilosc = get<2>(najtan);
        if (ilosc>0 && cena< budzet){//jeśli Mieszkańca stać na dany przedmiot
            budzet-= cena;
            ulubiony->sprzedaj_Towar(nazwa,1);
            cout<<"Udało się kupić najtanszy towar"<<nazwa <<" w cenie "<<cena<<endl;
            return true;
        };
        cout<<"Mieszkaniec nie ma wystarczającej ilości środków"<<endl;
    } else cout<<"Sklep znajduje się w Sieci, nie mozna w nim kupic towaru"<<endl;

    return false;

}

void Minimalista::wypisz_stan() {
    cout<<"Minimalista "<<x<<" "<<y<<" "<<budzet<<endl;
}
