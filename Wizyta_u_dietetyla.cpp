#include <exception>
#include <vector>
using namespace std;

#include "Wizyta_u_dietetyla.h"
#include "Trener.h"
#include "Dietetyk.h"
#include "Klient.h"


Wizyta_u_dietetyka::Wizyta_u_dietetyka(int a, double b, int c, Dietetyk* dietetyk, Klient* klient) {
	_dzien = a;
	_godzina_wizyty = b;
	_cena = c;
	_unnamed_Dietetyk_ = dietetyk;
	_unnamed_Klient_ = klient;
}

int Wizyta_u_dietetyka::get_dzien() {
	return _dzien;
}
double Wizyta_u_dietetyka::get_godzina() {
	return _godzina_wizyty;
}

int Wizyta_u_dietetyka::get_cena() {
	return _cena;
}