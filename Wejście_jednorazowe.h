#include <exception>
using namespace std;

#ifndef __Wejscie_jednorazowe_h__
#define __Wejscie_jednorazowe_h__

#include "Karnet.h"

// class Karnet;
class Wejscie_jednorazowe;

class Wejscie_jednorazowe: public Karnet
{

	public: void sprawdz_waznosc();
};

#endif
