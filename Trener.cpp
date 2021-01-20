#include <exception>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#include "Trener.h"
#include "Karta_zdrowia.h"
#include "Grupa_zajeciowa.h"
#include "Wizyta_u_dietetyla.h"
#include "Trening_personalny.h"
#include "Pracownik.h"
#include "Harmonogram.h"


Trener::Trener(string a, string b, int id) //konstruktor klasy Trener w ktorym zostaje generowane haslo automatycznie
{
	_imie = a;
	_nazwisko = b;
	_id = id;
	char chars[] = "qwertyuiopasdfghjklzxcvbnm1234567890";
	for (int i = 0; i < 6; i++)
	{
		_haslo += chars[rand() % 37];
	}
	cout << "Haslo zostalo automatycznie wygenerowane: " << _haslo << endl;
}

Karta_zdrowia* Trener::wglad_do_karty_zdrowia(Klient k) //wglad do karty zdrowia Klienta przez Trenera o ile jest podpieta
{
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

void Trener::dodaj_trening(Trening_personalny* trening) //metoda dodajaca trening personalny do Trenera
{
	_unnamed_Trening_personalny_.push_back(trening);
}

Trener Trener::dodaj_do_planu_trenera(Trening_personalny* trening, Trener t, Harmonogram a)//metoda dodajaca trening personalny do harmonogramu trenera tak aby nie pokrywaly sie dni i godziny w planie  
{
	   
	if (trening->get_dzien == 1)
	{
		for (int i = 0; i < t._plan_wizyt_pon.size(); i++)
		{
			if (t._plan_wizyt_pon[i]->get_godzina != trening->get_godzina && a.poniedzialek[i]._godzina!= trening->get_godzina)
			{
				t._plan_wizyt_pon.push_back(trening);
				cout << "Trening zapisana poprawnie!" << endl;
			}
		}
		sort(t._plan_wizyt_pon.begin(), t._plan_wizyt_pon.end());

	}
	if (trening->get_dzien == 2)
	{
		for (int i = 0; i < t._plan_wizyt_wt.size(); i++)
		{
			if (t._plan_wizyt_wt[i]->get_godzina != trening->get_godzina && a.wtorek[i]._godzina != trening->get_godzina)
			{
				t._plan_wizyt_wt.push_back(trening);
				cout << "Trening zapisana poprawnie!" << endl;
			}
		}
		sort(t._plan_wizyt_wt.begin(), t._plan_wizyt_wt.end());

	}
	if (trening->get_dzien == 3)
	{
		for (int i = 0; i < t._plan_wizyt_sr.size(); i++)
		{
			if (t._plan_wizyt_sr[i]->get_godzina != trening->get_godzina && a.sroda[i]._godzina != trening->get_godzina)
			{
				t._plan_wizyt_sr.push_back(trening);
				cout << "Trening zapisana poprawnie!" << endl;
			}
		}
		sort(t._plan_wizyt_sr.begin(), t._plan_wizyt_sr.end());

	}
	if (trening->get_dzien == 4)
	{
		for (int i = 0; i < t._plan_wizyt_czw.size(); i++)
		{
			if (t._plan_wizyt_czw[i]->get_godzina != trening->get_godzina && a.czwartek[i]._godzina != trening->get_godzina)
			{
				t._plan_wizyt_czw.push_back(trening);
				cout << "Trening zapisana poprawnie!" << endl;
			}
		}
		sort(t._plan_wizyt_czw.begin(), t._plan_wizyt_czw.end());

	}
	if (trening->get_dzien == 5)
	{
		for (int i = 0; i < t._plan_wizyt_pt.size(); i++)
		{
			if (t._plan_wizyt_pt[i]->get_godzina != trening->get_godzina && a.piatek[i]._godzina != trening->get_godzina)
			{
				t._plan_wizyt_pt.push_back(trening);
				cout << "Trening zapisana poprawnie!" << endl;
			}
		}
		sort(t._plan_wizyt_pt.begin(), t._plan_wizyt_pt.end());

	}
	return t;
};

Trener Trener::wyswietl_plan_tygodnia_trenera(Trener t) //metoda wyswietlajaca plan tygodniowy trenera 
{
	cout << "Poniedziałek: " << endl;
	for (int i = 0; i < t._plan_wizyt_pon.size(); i++)
	{
		cout << "Godzina: " << t._plan_wizyt_pon[i]->get_godzina << "Imie: " << t._plan_wizyt_pon[i]->_unnamed_Klient_->get_imie << endl;
	}
	cout << "Wtorek: " << endl;
	for (int i = 0; i < t._plan_wizyt_wt.size(); i++)
	{
		cout << "Godzina: " << t._plan_wizyt_wt[i]->get_godzina << "Imie: " << t._plan_wizyt_wt[i]->_unnamed_Klient_->get_imie << endl;
	}
	cout << "Sroda: " << endl;
	for (int i = 0; i < t._plan_wizyt_sr.size(); i++)
	{
		cout << "Godzina: " << t._plan_wizyt_sr[i]->get_godzina << "Imie: " << t._plan_wizyt_sr[i]->_unnamed_Klient_->get_imie << endl;
	}
	cout << "Czwartek: " << endl;
	for (int i = 0; i < t._plan_wizyt_czw.size(); i++)
	{
		cout << "Godzina: " << t._plan_wizyt_czw[i]->get_godzina << "Imie: " << t._plan_wizyt_czw[i]->_unnamed_Klient_->get_imie << endl;
	}
	cout << "Piatek: " << endl;
	for (int i = 0; i < t._plan_wizyt_pt.size(); i++)
	{
		cout << "Godzina: " << t._plan_wizyt_pt[i]->get_godzina << "Imie: " << t._plan_wizyt_pt[i]->_unnamed_Klient_->get_imie << endl;
	}
};

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

