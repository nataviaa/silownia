#include <exception>
using namespace std;

#ifndef __Karnet_miesi�czny_h__
#define __Karnet_miesi�czny_h__

#include "Karnet.h"

class Karnet;
class Klient;

class Karnet_miesi�czny // : public Karnet
{

private:

	int _dzien;
	int _miesiac;
	int _cena;

	Karnet* _unnamed_Karnet;

public:
	Karnet_miesi�czny(int, int, int);

	void przedluz(Karnet*, Klient*kl);
	void zawies(Karnet*, Karnet_miesi�czny);
};

#endif




