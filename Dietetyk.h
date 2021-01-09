#include <exception>
#include <string>
#include <vector>
using namespace std;

#ifndef __Dietetyk_h__
#define __Dietetyk_h__

#include "Wizyta_u_dietetyla.h"
#include "Pracownik.h"

class Wizyta_u_dietetyla;
// class Pracownik;
class Dietetyk;

class Dietetyk: public Pracownik
{

public: 
	
	Dietetyk();
	std::vector<Wizyta_u_dietetyla*> _unnamed_Wizyta_u_dietetyla_;

	void stwórz_plan_dietetyczny();

	void modyfikuj_plan_dietetyczny();
};

#endif
