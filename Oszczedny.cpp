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



Sklep *Oszczedny::znajdz_najtan() {
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

bool Oszczedny::kup() {
    cout<<"Rozpoczęto kupowanie dla klienta Oszczednego "<<x<<" "<<y<<endl;
    Sklep* S = znajdz_najtan();
    if (S){
        auto towar = S->sprawdz_Towar(szukany_T);
        float cena = get<1>(towar);
        unsigned int ilosc = get<2>(towar);
        if (ilosc>0 && cena< budzet){//jeśli Mieszkańca stać na dany przedmiot
            budzet-= cena;
            bool wynik;
            if (S->czy_w_Sieci()){
                wynik = S->daj_siec()->sprzedaj_Towar(S, szukany_T, 1);
            }else wynik = S->sprzedaj_Towar(szukany_T,1);
            if (wynik){
                cout<<"Udało się "<<szukany_T <<" w cenie "<<cena<<endl;
                return true;
            }else{
                cout<<"Nastąpił nieznany błąd"<<endl;
                return false;
            }


        };
    } else cout<<"W mieście nie ma szukanego Towaru"<<endl;
    return false;
}
