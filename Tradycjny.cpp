//
// Created by michal on 02.01.2023.
//
#include "cmath"
#include "Tradycjny.h"
# include "Sklep.h"
#include "Miasto.h"
#include <tuple>


float Tradycjny::odleglosc(float x_sklepu, float y_sklepu) {
    return sqrt(pow((x-x_sklepu), 2) + pow((y-y_sklepu), 2));
}
Sklep *Tradycjny::znajdz_najbliz() {
    float odleg = INFINITY;
    float nowa_odleg;
    tuple<string , float, unsigned int> sprawdzany_Towar;
    Sklep* najblizszy_Sklep = nullptr;
    for (auto* jh: Miasto::daj_miasto()->daj_handlowe()){
        if (!jh->czy_Siec()){
            auto* Sk = dynamic_cast<Sklep *>(jh);
            nowa_odleg = odleglosc(Sk->daj_x(), Sk->daj_y());
            if (nowa_odleg < odleg){// sprawdzamy czy odległość jest mniejsza
                sprawdzany_Towar = Sk->sprawdz_Towar(szukany_T);
                if (get<2>(sprawdzany_Towar)>0){//czy towar dostępny w sklepie
                    odleg = nowa_odleg;
                    najblizszy_Sklep = Sk;
                }
        }
            }
        }

    if (odleg!=INFINITY){
        return najblizszy_Sklep;
    } else return nullptr;

}

void Tradycjny::wypisz_stan() {
    cout<<"Tradycyjny"<<x<<" "<<y<<" "<<budzet<<endl;

}

bool Tradycjny::kup() {
    cout<<"Rozpoczęto kupowanie dla klienta Tradycyjnego "<<x<<" "<<y<<endl;
    Sklep* S = znajdz_najbliz();
    if (S){
        tuple<string, float, unsigned int> towar = S->sprawdz_Towar(szukany_T);
        float cena = get<1>(towar);
        unsigned int ilosc = get<2>(towar);
        if (ilosc>0 && cena< budzet){//jeśli Mieszkańca stać na dany przedmiot
            budzet-= cena;
            S->sprzedaj_Towar(szukany_T,1);
            cout<<"Udało się "<<szukany_T <<" w cenie "<<cena<<endl;
            return true;
        };
    } else cout<<"W  najbliższej odległości nie ma żadnych sklepów z szukanym towarem"<<endl;
    return false;
}



