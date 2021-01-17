#include <exception>
using namespace std;

#ifndef __Wejscie_jednorazowe_h__
#define __Wejscie_jednorazowe_h__

//#include "Karnet.h"
#include "Klient.h"

//class Karnet;
class Wejscie_jednorazowe;
class Klient;

class Wejscie_jednorazowe
{
private:

	int _dzien;
	int _cena;

public:

	Klient* _unnamed_Klient_;
	Wejscie_jednorazowe(int, int, Klient*);
	int get_dzien();
	

};

#endif
