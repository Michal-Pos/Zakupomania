//
// Created by michal on 03.01.2023.
//
#include "cmath"
#include "Sklep.h"

#include "Oszczedny.h"

//Sklep *Oszczedny::znajdz_sklep(Miasto *M) {
//    return Sklep*;
//    //    for (Sklep* sk: M->daj_sklepy()){
////        if (JH->czy_Siec()){
////            Siec* Si  = reinterpret_cast<Siec *>(JH);
////
////        }else
////            Sklep* Sk = reinterpret_cast<Sklep *>(JH);
////    }
//}

void Oszczedny::wypisz_stan() {
    cout<<"Oszczędny "<<x<<" "<<y<<" "<<budzet<<endl;
}

Sklep *Oszczedny::znajdz_sklep() {
    float cena = INFINITY;
    float nowa_cena;
    tuple<string , float, unsigned int> sprawdzany_Towar;
    Sklep* najtanszy_Sklep = nullptr;
    for (Sklep* Sk: Miasto::daj_miasto()->daj_sklepy()) {
        sprawdzany_Towar = Sk->sprawdz_Towar(szukany_T);
        nowa_cena = get<1>(sprawdzany_Towar);
        if (cena > nowa_cena && get<2>(sprawdzany_Towar)) {
            cena = nowa_cena;
            najtanszy_Sklep = Sk;
        }
    }
    if (cena!=INFINITY){
        return najtanszy_Sklep;
    } else return nullptr;
}
