#include <iostream>
#include "Miasto.h"
#include "Sklep.h"
#include "Towar.h"





int main() {
    Towar T1(2,12,"Wóda");
    T1.wypisz_stan();
    T1.ustaw_cene(12.5);
    T1.wypisz_stan();

    Towar T2(10,9,"Zioło");
    T2.wypisz_stan();
    T2.ustaw_cene(17);
    T2.wypisz_stan();

    Sklep Pulawska(17,18);
    Pulawska.dodaj_Towar(&T1);
    Pulawska.dodaj_Towar(&T2);
    Pulawska.wypisz_stan();

    Towar* T = Pulawska.sprawdz_Towar("Zioło");
    Pulawska.sprzedaj_Towar(T);
    Pulawska.wypisz_stan();
//    Pulawska.sprawdz_Towar("Kremówka");



    return 0;
}
