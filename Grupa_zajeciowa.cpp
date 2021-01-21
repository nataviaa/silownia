#include <exception>
#include <vector>
using namespace std;

#include "Grupa_zajeciowa.h"
#include "Klient.h"
#include "Trener.h"

Grupa_zajeciowa::Grupa_zajeciowa(int g, int l, int s, int d, string rodzaj, Trener*trener) {
	_godzina = g;
	_liczba_osob = l;
	_sala = s;
	_dzien_tygodnia = d;
	_rodzaj_zajec = rodzaj;
	_unnamed_Trener_ = trener;
}

void Grupa_zajeciowa::dodaj_uczestnika(Klient k) {
	_unnamed_Klient_.push_back(&k);
	_liczba_osob++;
}


string Grupa_zajeciowa::get_rodzaj() {
	return _rodzaj_zajec;
}

int Grupa_zajeciowa::get_godzina() {
	return _godzina;
}
