#include <exception>
#include <vector>
using namespace std;

#ifndef __Recepcjonista_h__
#define __Recepcjonista_h__

#include "Karnet.h"
//#include "Pracownik.h"
#include "Klient.h"
#include "Harmonogram.h"
#include "Grupa_zajeciowa.h"

class Karnet;
class Pracownik;
class Recepcjonista;
class Klient;
class Harmonogram;
class Grupa_zajeciowa;

class Recepcjonista
{
	
public: 

	std::vector<Grupa_zajeciowa*> poniedzialek;
	std::vector<Grupa_zajeciowa*> wtorek;
	std::vector<Grupa_zajeciowa*> sroda;
	std::vector<Grupa_zajeciowa*> czwartek;
	std::vector<Grupa_zajeciowa*> piatek;

	string _imie;
	string _nazwisko;
	int _iD;
	std::vector<Karnet*> _unnamed_Karnet_;
	string _haslo;

	Recepcjonista(string, string, int);
		
	void archiwizuj_potwierdzenia_przelewu(Karnet);

	void dodaj_karnet(Karnet*);

	void dodaj_grupe(int g, int l, int s, int d, string rodzaj, Trener* t);

	void usun_grupe(int, int, int, int, string, Trener*);

	string get_imie();
	string get_nazwisko();
	int get_iD();
	string get_haslo();
};

#endif
