#include <exception>
#include <string>
using namespace std;

#include "Karta_zdrowia.h"
#include "Klient.h"
#include "Trener.h"
#include "Dietetyk.h"


Karta_zdrowia::Karta_zdrowia(int m, int w, string k, Klient* klient, Trener* trener) {
	_masa = m;
	_wzrost = w;
	_grupa_krwi = k;
	_unnamed_Klient_ = klient;
	_unnamed_Trener_ = trener;
}

Karta_zdrowia::Karta_zdrowia(int m, int w, string k, Klient* klient, Dietetyk* dietetyk) {
	_masa = m;
	_wzrost = w;
	_grupa_krwi = k;
	_unnamed_Klient_ = klient;
	_unnamed_Dietetyk_ = dietetyk;
}

int Karta_zdrowia::get_masa() {
	return _masa;
}
int Karta_zdrowia::get_wzrost() {
	return _wzrost;
}
string Karta_zdrowia::get_grupa_krwi() {
	return _grupa_krwi;
}
Klient* Karta_zdrowia::get_klient() {
	return _unnamed_Klient_;
}
Trener* Karta_zdrowia::get_trener() {
	return _unnamed_Trener_;
}
Dietetyk* Karta_zdrowia::get_dietetyk() {
	return _unnamed_Dietetyk_;
}
