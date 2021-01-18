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
    klient2.zakup_karnetu("tak", 89, 7, 07, &klient2);

    Klient klient3("Jakuba", " Mieszko", 1999);
    Recepcjonista recepcjonista3("Kasia", "Nowak", 15);
    klient3.zakup_wejscia_jednorazowego(20, 4, &klient3);


    Klient klient4("Miloszowi", " Twardakowi", 1993);
    klient4.wypisz3();
   Karnet_miesiêczny karnet( 30, 1, 90);
   karnet.wypisz2();
    karnet.przedluz(&karnet, &klient4);
    
    Klient klient5("Karolina", " Jaszyk", 2000);
    klient5.wypisz4();
    Karnet_miesiêczny karnet1(24, 4, 40);
    karnet.zawies(&karnet1, &klient5);


    system("pause");
    return 0;
    
}
