//
// Created by michal on 02.01.2023.
//
#include "math.h"
#include "Tradycjny.h"
# include "Sklep.h"
#include "Miasto.h"
#include <tuple>


float Tradycjny::odleglosc(float x_sklepu, float y_sklepu) {
    return sqrt(pow((x-x_sklepu), 2) + pow((y-y_sklepu), 2));
}
Sklep *Tradycjny::znajdz_najbliz(Miasto *M) {
    float odleg = INFINITY;
    float nowa_odleg;
    tuple<string , float, unsigned int> sprawdzany_Towar;
    Sklep* najblizszy_Sklep = nullptr;
    for (Sklep* Sk: M->daj_sklepy()){
        nowa_odleg = odleglosc(Sk->daj_x(), Sk->daj_y());
        if (nowa_odleg < odleg){// sprawdzamy czy odległość jest mniejsza
            sprawdzany_Towar = Sk->sprawdz_Towar(szukany_T);
            if (get<2>(sprawdzany_Towar)>0){//czy towar dostępny w sklepie
                odleg = nowa_odleg;
                najblizszy_Sklep = Sk;
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

//bool Tradycjny::kup() {
//    if ()
//}
//Sklep *Tradycjny::znajdz_najbliz(Miasto *M) {
//    return nullptr;
//}

