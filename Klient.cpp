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
#include "Trener.h"
#include "Dietetyk.h"
#include "Trening_personalny.h"

Klient::Klient(string imie , string nazwisko, int rok) {
	_imie = imie;
	_nazwisko = nazwisko;
	_rok_urodzenia = rok;
	char chars[] = "qwertyuiopasdfghjklzxcvbnm1234567890";
	for (int i = 0; i < 6; i++)
	{
		_haslo += chars[rand() % 37];
	}
	cout << "Haslo zostalo automatycznie wygenerowane: " << _haslo << endl;
}
void Klient::zapisz_do_grupy(Grupa_zajeciowa* grupa, Klient klient) {
	//_unnamed_Grupa_zajeciowa.push_back(grupa);
	_unnamed_Grupa_zajeciowa = grupa;
	cout << "Klient " << _imie << " jest uczestnikiem zajec w grupie." << endl;
	grupa->dodaj_uczestnika(klient);
}
void Klient::zapisz_do_dietetyka(int dzien, double godzina, int cena, Dietetyk* dietetyk, Klient* klient) {
	Wizyta_u_dietetyka wizyta(dzien, godzina, cena, dietetyk, klient);//tworzymy wizyte
	dietetyk->dodaj_wizyte(&wizyta);//dodajemy wizyte do dietetyka
	_unnamed_Wizyta_u_dietetyka_.push_back(&wizyta);//dodajemy wizyte do klienta
	cout << "Klient " << _imie << "zostal zapisany na wizyte do dietetyka." << endl;
}
void Klient::zapisz_na_trening(int dzien, double godzina, string rodzaj, Trener* trener, Klient* klient) {
	Trening_personalny trening(dzien, godzina, rodzaj, trener, klient);
	trener->dodaj_trening(&trening);
	_unnamed_Trening_personalny_.push_back(&trening);
	cout << "Klient " << _imie << "zostal zapisany na trening personalny" << endl;

}
void Klient::uaktualnij_dane(string imie, string nazwisko, string imie_rodzica, string nazwisko_rodzica) {
	_imie = imie;
	_nazwisko = nazwisko;
	_imie_rodzica = imie_rodzica;
	_nazwisko_rodzica = nazwisko_rodzica;

	cout << "Zamiany w danych klienta zosta³y zapisane pomyslnie." << endl;
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
	cout << "Karta zdrowia zostala dodana." << endl;
}
string Klient::get_imie() {
	return _imie;
}
string Klient::get_haslo() {
	return _haslo;
}
string Klient::get_nazwisko() {
	return _nazwisko;
}
Grupa_zajeciowa* Klient::get_grupa() {
	return _unnamed_Grupa_zajeciowa;
}
Karnet_miesieczny* Klient::get_karnet_miesieczny() {
	return _unnamed_Karnet_miesieczny;
}
Wejscie_jednorazowe* Klient::get_wejscie_jednorazowe() {
	return _unnamed_Wejscie_jednorazowe;
}
Subskrypcja* Klient::get_subskrypcja() {
	return _unnamed_Subskrypcja;
}
Karta_zdrowia* Klient::get_karta_zdrowia() {
	return _unnamed_Karta_zdrowia_;
}
std::vector<Wizyta_u_dietetyka*> Klient::get_wizyta() {
	return _unnamed_Wizyta_u_dietetyka_;
}
std::vector<Trening_personalny*> Klient::get_trening() {
	return _unnamed_Trening_personalny_;
}
void Klient::set_karnet_miesieczny(Karnet_miesieczny* k) {
	_unnamed_Karnet_miesieczny = k;
}
void Klient::set_wejscie_jednorazowe(Wejscie_jednorazowe* w) {
	_unnamed_Wejscie_jednorazowe = w;
}
void Klient::set_subskrypcja(Subskrypcja* s) {
	_unnamed_Subskrypcja = s;
}




