//
// Created by michal on 03.01.2023.
//

#include "Oszczedny.h"

Sklep *Oszczedny::znajdz_sklep(Miasto *M) {
    for (J_Handlowa* JH: M->daj_handlowe()){
        if (JH->czy_Siec()){
            Siec* Si  = reinterpret_cast<Siec *>(JH);

        }else
            Sklep* Sk = reinterpret_cast<Sklep *>(JH);
    }
}

void Oszczedny::wypisz_stan() {
    cout<<"Oszczędny "<<x<<" "<<y<<" "<<budzet<<endl;
}
