#include <exception>
using namespace std;

#ifndef __Karnet_miesiêczny_h__
#define __Karnet_miesiêczny_h__

#include "Karnet.h"

class Karnet;
class Klient;

class Karnet_miesiêczny // : public Karnet
{

private:

	int _dzien;
	int _miesiac;
	int _cena;

	Karnet* _unnamed_Karnet;

public:
	Karnet_miesiêczny(int, int, int);

	void przedluz(Karnet*, Klient*kl);
	void zawies(Karnet*, Karnet_miesiêczny);
};

#endif




