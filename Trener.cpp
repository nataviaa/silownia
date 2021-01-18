#include <exception>
#include <string>
#include <vector>
using namespace std;

#include "Trener.h"
#include "Karta_zdrowia.h"
#include "Grupa_zajeciowa.h"
#include "Wizyta_u_dietetyla.h"
#include "Trening_personalny.h"
#include "Pracownik.h"


Karta_zdrowia* Trener::wglad_do_karty_zdrowia(Klient k) {
	if (k._unnamed_Karta_zdrowia_ != nullptr)
	{
		cout << "Dane w karcie zdrowia: " << endl;
		cout << "Masa[kg]: " << k._unnamed_Karta_zdrowia_->_masa << endl;
		cout << "Wzrost[cm]: " << k._unnamed_Karta_zdrowia_->_wzrost << endl;
		cout << "Grupa krwi: " << k._unnamed_Karta_zdrowia_->_grupa_krwi << endl;
	}
	else
		cout << "Brak podpietej karty zdrowia." << endl;

	return k._unnamed_Karta_zdrowia_;
}

void Trener::dodaj_trening(Trening_personalny* trening) {
	_unnamed_Trening_personalny_.push_back(trening);
}

Trener::Trener(string a, string b, int c) {
	_imie = a;
	_nazwisko = b;
	_id = c;
}
string Trener::get_imie() {
	return _imie;
}
string Trener::get_nazwisko() {
	return _nazwisko;
}

int Trener::getID() {
	return _id;
}
std::vector<Grupa_zajeciowa*>  Trener::get_grupa() {
	return _unnamed_Grupa_zajeciowa_;
}
std::vector<Trening_personalny*>  Trener::get_trening_personalny() {
	return _unnamed_Trening_personalny_;
}

