#include <exception>
#include <string>
#include <vector>
using namespace std;

#include "Dietetyk.h"
#include "Wizyta_u_dietetyla.h"
#include "Pracownik.h"

Dietetyk::Dietetyk(string a, string b, int id) {
	_imie = a;
	_nazwisko = b;
	_id = id;
}
int Dietetyk::getID(){
	return _id;
}
Karta_zdrowia* Dietetyk::wglad_do_karty_zdrowia(Klient k) {
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
void Dietetyk::dodaj_wizyte(Wizyta_u_dietetyka* wizyta) {
	_unnamed_Wizyta_u_dietetyka_.push_back(wizyta);
}

