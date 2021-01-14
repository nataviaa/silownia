#include <vector>
using namespace std;

#include "Trening_personalny.h"
#include "Trener.h"
#include "Klient.h"

Trening_personalny::Trening_personalny(int dzien, double godzina, string rodzaj, Trener* trener, Klient* klient) {
	_dzieñ = dzien;
	_godzina = godzina;
	_intensywnosc = rodzaj;
	_unnamed_Trener_ = trener;
	_unnamed_Klient_ = klient;

}