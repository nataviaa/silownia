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

double Grupa_zajeciowa::get_godzina() {
	return _godzina;
}
string Grupa_zajeciowa::get_rodzaj_zajec() {
	return _rodzaj_zajec;
}
int Grupa_zajeciowa::get_liczba_osob() {
	return _liczba_osob;
}
int Grupa_zajeciowa::get_sala() {
	return _sala;
}
int Grupa_zajeciowa::get_dzien_tygodnia() {
	return _dzien_tygodnia;
}
std::vector<Klient*> Grupa_zajeciowa::get_klient() {
	return _unnamed_Klient_;
}
Trener* Grupa_zajeciowa::get_trener() {
	return _unnamed_Trener_;
}