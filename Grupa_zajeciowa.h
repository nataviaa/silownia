#include <exception>
#include <string>
#include <vector>

using namespace std;

#ifndef __Grupa_zajeciowa_h__
#define __Grupa_zajeciowa_h__

// #include "Klient.h"
// #include "Trener.h"
#include "Harmonogram.h"

class Klient;
class Trener;
class Grupa_zajeciowa;
class Harmonogram;

class Grupa_zajeciowa
{
public: 
	int _godzina;
	string _rodzaj_zajec;//np Yoga, k-box
	int  _liczba_osob;
	int  _sala;
	int _dzien_tygodnia;//1-7
	
public: 
	vector <Klient*> _unnamed_Klient_;
	Trener* _unnamed_Trener_;
	Grupa_zajeciowa();
	Grupa_zajeciowa(int g, int l, int s, int d, string rodzaj, Trener*);
	void dodaj_uczestnika(Klient);
	
	string get_rodzaj();

	int get_godzina();
	
};

#endif
