#include <exception>
using namespace std;

#ifndef __Subskrypcja__h__
#define __Subskrypcja__h__

#include "Karnet.h"

// class Karnet;
class Subskrypcja_;

class Subskrypcja_: public Karnet
{
private: 
	int _czas_trwania;

public: 
	void przed³oz();
	void zawies();
	int get_czas_trwania();
};

#endif
