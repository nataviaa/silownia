#include <exception>
using namespace std;

#ifndef __Karnet_miesiêczny_h__
#define __Karnet_miesiêczny_h__

#include "Karnet.h"

class Karnet;
class Klient;

class Karnet_miesieczny
{

private:

	int _dzien;
	int _miesiac;
	int _cena;

public:
	Karnet_miesieczny(int, int, int);

	void przedluz();
	void zawies(Karnet_miesieczny*, Klient*);
	void wypisz();
	int get_miesiac();
	int get_dzien();
	int get_cena();
	
};

#endif