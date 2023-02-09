//
// Created by michal on 01.01.2023.
//

#include "Siec.h"
#include "cmath"
#include <utility>

//Siec::Siec(float _marza) {
//
//}


tuple<string, float, unsigned int> Siec::sprawdz_Towar(string nazwa) {
    if (!lista_sklepow.empty()){
        for (Sklep* S: lista_sklepow){
            if (get<2>(S->sprawdz_Towar(nazwa))>0){
                tuple<string, float, unsigned int> wynik = S->sprawdz_Towar(nazwa);
                cout<<"W Sieci jest Sklep z "<<nazwa<<" w ilości "<<get<2>(wynik)<<endl;
                return wynik;
            }
        }
        cout<<"W Sieci nie ma Sklepu z "<<nazwa<<endl;
    } else cout<<"W Sieci nie ma sklepów, nie można sprawdzić towarów"<<endl;


    tuple<string , float, int> wynik = make_tuple("", 0, 0);
    return wynik;
}
float Siec::uwzglednij_marze(float stara_cena) {return stara_cena*(ceil(1 + marza)/100);}

tuple<string , float, unsigned int> Siec::sprawdz_Towar(Sklep *S, string nazwa, unsigned int ilosc) {
    if (czy_Sklep_w_Sieci(S)){
        return S->sprawdz_Towar(nazwa);
    }
    tuple<string , float, int> wynik = make_tuple("", 0, 0);
    return wynik;
}

bool Siec::sprzedaj_Towar(Sklep *S, string nazwa, unsigned int ilosc) {
    if (czy_Sklep_w_Sieci(S)){
        return S->sprzedaj_Towar(nazwa, ilosc);
    }
    return false;
}


void Siec::wypisz_stan() {
    cout<<"........................"<<endl;
    cout<<"Stan Sieci:"<<endl;
    cout<<"Marża: "<<marza<<endl;
    cout<<"Ilosc Sklepow: "<<lista_sklepow.size()<<endl;
    for (Sklep* Sk:lista_sklepow){
        Sk->wypisz_stan();
    }

}

bool Siec::dodaj_Sklep(Sklep *S) {
    if (czy_Sklep_w_Sieci(S)){
        cout<<"Sklep jest już w sieci"<<endl;
        return false;
    }
    else lista_sklepow.push_back(S);
    cout<<"Do Sieci dodano Sklep, teraz się w niej znajduje: "<<lista_sklepow.size()<<" sklepów"<<endl;
    return true;
}

bool Siec::usun_Sklep(Sklep *S) {
    int i = 0;
    for (Sklep* Sk: lista_sklepow){
        if (Sk==S){
            lista_sklepow.erase(lista_sklepow.begin()+ i);
            return true;
        }
        i+=1;
    }
    return false;
}


bool Siec::czy_Sklep_w_Sieci(Sklep* S) {
    for (Sklep* Sk: lista_sklepow){
        if (Sk==S){
            return true;
        }
    }
    return false;
}