#include <vector>
using namespace std;

#include "Trening_personalny.h"
#include "Trener.h"
#include "Klient.h"

Trening_personalny::Trening_personalny(int dzien, double godzina, string rodzaj, Trener* trener, Klient* klient) 
{
	_dzieñ = dzien;
	_godzina = godzina;
	_intensywnosc = rodzaj;
	_unnamed_Trener_ = trener;
	_unnamed_Klient_ = klient;

}

int Trening_personalny::get_dzien()
{
	return _dzieñ;
}
double Trening_personalny::get_godzina()
{
	return _godzina;
}
string Trening_personalny::get_intensywnosc() 
{
	return _intensywnosc;
}
Trener* Trening_personalny::get_trener() {
	return _unnamed_Trener_;
}



Klient* Trening_personalny::get_klient() {
	return _unnamed_Klient_;
}