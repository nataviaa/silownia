#include <exception>
using namespace std;

#ifndef __Subskrypcja__h__
#define __Subskrypcja__h__

#include "Karnet.h"

// class Karnet;
class Subskrypcja_;

class Subskrypcja
{
private: 
	int _miesiac;
	int _dzien;

public: 
	Subskrypcja(int, int);

	void zawies();
};

#endif
