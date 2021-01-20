#include <exception>
#include <vector>
using namespace std;

#include "Wejœcie_jednorazowe.h"
//#include "Karnet.h"
#include "Klient.h"

Wejscie_jednorazowe :: Wejscie_jednorazowe(int a, int c, Klient* klient)
{
	_dzien = a;
	_cena = c;
	_unnamed_Klient_ = klient;
}

int Wejscie_jednorazowe::get_dzien()
{
	return _dzien;
}
int Wejscie_jednorazowe::get_cena() {
	return _cena;
}
Klient* Wejscie_jednorazowe::get_klient() {
	return _unnamed_Klient_;
}



