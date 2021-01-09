#include <exception>
#include <string>
using namespace std;

#include "Karta_zdrowia.h"
#include "Klient.h"
#include "Trener.h"

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


