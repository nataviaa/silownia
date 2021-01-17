#include <exception>
#include <vector>
using namespace std;

#include "Grupa_zajeciowa.h"
#include "Klient.h"
#include "Trener.h"

void Grupa_zajeciowa::dodaj_uczestnika(Klient k) {
	_unnamed_Klient_.push_back(&k);
	_liczba_osob++;
}

void Grupa_zajeciowa::usun_uczestnika(Klient k) {
	throw "Not yet implemented";
}

void Grupa_zajeciowa::podaj_godziny_zajec() {
	throw "Not yet implemented";
}

void Grupa_zajeciowa::wypisz1()
{ 
	cout <<"Klient zapisal sie na: "<< _rodzaj_zajec <<"\nGodzina: "<< _godzina <<"\nDzien tygodnia: "<< _dzien_tygodnia <<"\nNumer sali: "<< _sala <<"\nLiczba osob w grupie: "<<_liczba_osob<< endl;
}
