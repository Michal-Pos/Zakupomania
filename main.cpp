#include <iostream>
#include "Miasto.h"
#include "Sklep.h"
#include "Towar.h"





int main() {
    Towar T(2,12,"Wóda");
    T.wypisz_stan();
    T.ustaw_cene(12.5);
    T.wypisz_stan();

    Sklep Rossman1(17,18);
    Rossman1.dodaj_Towar(&T);
    Rossman1.wypisz_stan();



    return 0;
}
