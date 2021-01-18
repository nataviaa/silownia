#include <exception>
#include <string>
using namespace std;

#ifndef __Karta_zdrowia_h__
#define __Karta_zdrowia_h__

// #include "Klient.h"
// #include "Trener.h"

class Klient;
class Trener;
class Karta_zdrowia;
class Dietetyk;

class Karta_zdrowia
{
public: 
	int _masa;
	int _wzrost;
	string _grupa_krwi;
	Klient* _unnamed_Klient_;
	Trener* _unnamed_Trener_;
	Dietetyk* _unnamed_Dietetyk_;


	 Karta_zdrowia(int m, int w, string k, Klient* klient, Trener* trener);
	 Karta_zdrowia(int m, int w, string k, Klient* klient, Dietetyk* dietetyk);

	 int get_masa();
	 int get_wzrost();
	 string get_grupa_krwi();
	 Klient* get_klient();
	 Trener* get_trener();
	 Dietetyk* get_dietetyk();

};

#endif
