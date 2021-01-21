#include <exception>
using namespace std;

#include "Wejscie_jednorazowe.h"
#include "Karnet.h"

Wejscie_jednorazowe::Wejscie_jednorazowe(int a,int b, int c)
{
	_dzien = a;
	_cena = c;
	_miesiac = b;
}

int Wejscie_jednorazowe::get_dzien()
{
	return _dzien;
}
int Wejscie_jednorazowe::get_cena() {
	return _cena;
}

