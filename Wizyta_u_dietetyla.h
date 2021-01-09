#include <exception>
#include <vector>
using namespace std;

#ifndef __Wizyta_u_dietetyla_h__
#define __Wizyta_u_dietetyla_h__

// #include "Trener.h"
// #include "Dietetyk.h"
#include "Klient.h"


class Dietetyk;
class Klient;
class Wizyta_u_dietetyla;

class Wizyta_u_dietetyla
{
private: 
	int _dzien;
	int _godzina_wizyty;
	int _cena;
	
public: 
	Dietetyk* _unnamed_Dietetyk_;
	std::vector<Klient*> _unnamed_Klient_;

};

#endif
