#include <exception>
#include <vector>
using namespace std;

#ifndef __Recepcjonista_h__
#define __Recepcjonista_h__

#include "Karnet.h"
//#include "Pracownik.h"
#include "Klient.h"

class Karnet;
class Pracownik;
class Recepcjonista;
class Klient;

class Recepcjonista
{

public: 

	string _imie;
	string _nazwisko;
	int _iD;
	std::vector<Karnet*> _unnamed_Karnet_;

	Recepcjonista(string, string, int);
		
	void archiwizuj_potwierdzenia_przelewu(Karnet);

	void dodaj_karnet(Karnet*);

	string get_imie();
	string get_nazwisko();
	int get_iD();
};

#endif
