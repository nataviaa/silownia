#include <exception>
#include <string>
#include <vector>
using namespace std;

#ifndef __Dietetyk_h__
#define __Dietetyk_h__

#include "Wizyta_u_dietetyla.h"

class Wizyta_u_dietetyla;
class Dietetyk;

class Dietetyk: 
{

	string _imie;
	string _nazwisko;
	int _id;
	
public: 
	std::vector<Wizyta_u_dietetyla*> _unnamed_Wizyta_u_dietetyla_;
	
	Dietetyk(string, string, int);
	
};

#endif
