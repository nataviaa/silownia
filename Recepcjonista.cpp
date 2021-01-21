#include <exception>
#include <vector>
using namespace std;

#include "Recepcjonista.h"
#include "Karnet.h"
//#include "Pracownik.h"
#include "Klient.h"
#include "Grupa_zajeciowa.h"

Recepcjonista::Recepcjonista(string imie, string nazwisko, int i) {
	_imie = imie;
	_nazwisko = nazwisko;
	_iD = i;
	char chars[] = "qwertyuiopasdfghjklzxcvbnm1234567890";
	for (int i = 0; i < 6; i++)
	{
		_haslo += chars[rand() % 37];
	}
	cout << "Haslo zostalo automatycznie wygenerowane: " << _haslo << endl;
}
void Recepcjonista::archiwizuj_potwierdzenia_przelewu(Karnet k) {
	cout<<"Karnet zostal wysłany do ksiegowosci"<<endl;
}

void Recepcjonista::dodaj_karnet(Karnet* karnet) 
{
	_unnamed_Karnet_.push_back(karnet);
}

string Recepcjonista::get_imie() {
	return _imie;
}
string Recepcjonista::get_nazwisko() {
	return _nazwisko;
}
int Recepcjonista::get_iD() {
	return _iD;
}
string Recepcjonista::get_haslo()
{
	return _haslo;
}

void Recepcjonista::dodaj_grupe(int g, int l, int s, int d, string rodzaj, Trener* t) {

	Grupa_zajeciowa grupa(g,l,s,d,rodzaj,t);

	int dzien = grupa._dzien_tygodnia;
	switch (dzien)
	{
	case 1:
		poniedzialek.push_back(&grupa);
		break;
	case 2:
		wtorek.push_back(&grupa);
		break;
	case 3:
		sroda.push_back(&grupa);
		break;
	case 4:
		czwartek.push_back(&grupa);
		break;
	case 5:
		piatek.push_back(&grupa);
		break;
	}
}

void Recepcjonista::usun_grupe(int g, int l, int s, int d, string rodzaj, Trener* t) {
	Grupa_zajeciowa grupa(g, l, s, d, rodzaj, t);
	int dzien = grupa._dzien_tygodnia;
	switch (dzien)
	{
	case 1:
		poniedzialek.pop_back();
		break;
	case 2:
		wtorek.pop_back();
		break;
	case 3:
		sroda.pop_back();
		break;
	case 4:
		czwartek.pop_back();
		break;
	case 5:
		piatek.pop_back();
		break;
	}
}