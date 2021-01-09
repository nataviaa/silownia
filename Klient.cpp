#include <exception>
#include <string>
#include <vector>
using namespace std;

#include "Klient.h"
#include "Karta_zdrowia.h"
#include "Wizyta_u_dietetyla.h"
#include "Trening_personalny.h"
#include "Grupa_zajeciowa.h"
#include "Karnet.h"

Klient::Klient(string imie , string nazwisko, int rok) {
	_imie = imie;
	_nazwisko = nazwisko;
	_rok_urodzenia = rok;
}
void Klient::zapisz_do_grupy(Grupa_zajeciowa* grupa, Klient klient) {
	_unnamed_Grupa_zajeciowa = grupa;
	cout << "Klient " << _imie << " jest uczestnikiem zajec w grupie." << endl;
	grupa->dodaj_uczestnika(klient);
}

void Klient::uaktualnij_dane(string imie, string nazwisko, string imie_rodzica, string nazwisko_rodzica) {
	_imie = imie;
	_nazwisko = nazwisko;
	_imie_rodzica = imie_rodzica;
	_nazwisko_rodzica = nazwisko_rodzica;
	
}

void Klient::wglad_w_karte_zdrowia() {
	if (_unnamed_Karta_zdrowia_ != nullptr)
	{
		cout << "Dane w karcie zdrowia: " << endl;
		cout << "Masa[kg]: " << _unnamed_Karta_zdrowia_->_masa << endl;
		cout << "Wzrost[cm]: " << _unnamed_Karta_zdrowia_->_wzrost << endl;
		cout << "Grupa krwi: " << _unnamed_Karta_zdrowia_->_grupa_krwi << endl;
	}
	else
		cout << "Brak podpietej karty zdrowia." << endl;
}
void Klient::dodaj_karte_zdrowia(Karta_zdrowia k ) {
	_unnamed_Karta_zdrowia_ = &k;
	cout << "Karta zdrowia została dodana." << endl;
}

void Klient::set_karnet(Karnet* k) {
	_unnamed_Karnet = k;
}

string Klient::get_imie() {
	return _imie;
}

Grupa_zajeciowa* Klient::get_grupa() {
	return _unnamed_Grupa_zajeciowa;
}




