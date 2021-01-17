
#include <iostream>

#include "Dieta.h"
#include "Dietetyk.h"
#include "Grupa_zajeciowa.h"
#include "Karnet.h"
#include "Karnet_miesiêczny.h"
#include "Karta_zdrowia.h"
#include "Klient.h"
#include "Recepcjonista.h"
#include "Subskrypcja_.h"
#include "Trener.h"
#include "Trening_personalny.h"
#include "Wejœcie_jednorazowe.h"
#include "Wizyta_u_dietetyla.h"

int main()
{
    Klient klient_uno("Andrzej", " Giza ", 1990);
    Grupa_zajeciowa Yoga1(18,13,1,3,"Yoga");
    klient_uno.zapisz_do_grupy(&Yoga1,klient_uno);
    Yoga1.wypisz1();

    Dietetyk dietetyk_uno("Eryk", "Broda", 1);
    klient_uno.zapisz_do_dietetyka(1, 14.50, 43, &dietetyk_uno, &klient_uno);
   
    Trener trener_uno("Eryk", "Broda", 1);
    klient_uno.zapisz_na_trening(5, 18.22, "srednia", &trener_uno, &klient_uno);

    Klient klient2("Anne", " Kowalska", 2001);
    Recepcjonista recepcjonista2("Kasia", "Nowak", 15);
    klient2.zakup_karnetu("tak", 89, 7, 07, &recepcjonista2, &klient2);

    Klient klient3("Jakuba", " Mieszko", 1999);
    Recepcjonista recepcjonista3("Kasia", "Nowak", 15);
    klient3.zakup_wejscia_jednorazowego(20, 4, &recepcjonista3, &klient3);


    system("pause");
    return 0;
    
}
