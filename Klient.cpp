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
void Klient::zapisz_do_grupy(Grupa_zajeciowa* grupa) {
	throw "Not yet implemented";
}

Klient Klient::uaktualnij_dane(string aImie, string aNazwisko, string aImie_rodzica, string aNazwisko_rodzica, char aNumer_telefonu_rodzica) {
	throw "Not yet implemented";
}

void Klient::wglad_w_karte_zdrowia() {
	throw "Not yet implemented";
}

void Klient::set_karnet(Karnet* k) {
	_unnamed_Karnet = k;
}




