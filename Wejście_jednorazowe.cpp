#include <exception>
#include <vector>
using namespace std;

#include "Wej�cie_jednorazowe.h"
//#include "Karnet.h"
#include "Klient.h"

Wejscie_jednorazowe :: Wejscie_jednorazowe(int a, int c,Recepcjonista* recepcjonista, Klient* klient)
{
	_dzien = a;
	_cena = c;
	_unnamed_Recepcjonista_ = recepcjonista;
	_unnamed_Klient_ = klient;
}

int Wejscie_jednorazowe::get_dzien()
{
	return _dzien;
}


