#include <exception>
#include <vector>
using namespace std;

#include "Wejœcie_jednorazowe.h"
//#include "Karnet.h"
#include "Klient.h"

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



