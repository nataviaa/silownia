#include <exception>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#include "Dietetyk.h"
#include "Wizyta_u_dietetyla.h"
#include "Pracownik.h"

Dietetyk::Dietetyk(string a, string b, int id) //konstruktor klasy Dietetyk w ktorym zostaje generowane haslo automatycznie
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
int Dietetyk::get_id()
{
	return _id;
}
string Dietetyk::get_haslo() 
{
	return _haslo;
}
Karta_zdrowia* Dietetyk::wglad_do_karty_zdrowia(Klient k) //metoda, ktora umozliwia dietetykowi wglad do karty zdrowia Klienta,jesli jest ona podpieta to bedzie wyswietlac dane Klienta
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
void Dietetyk::dodaj_wizyte(Wizyta_u_dietetyka* wizyta) {
	_unnamed_Wizyta_u_dietetyka_.push_back(wizyta);
}

Dietetyk Dietetyk:: dodaj_do_planu_wizyt_dietetyka(Wizyta_u_dietetyka* wizyta, Dietetyk a) //metoda dodajaca do planu Dietetyka wizyte tak aby nie pokrywaly sie z innymi godzinami i dniami zajetymi 
		if (wizyta->get_dzien == 1)
		{
			for (int i = 0; i < a._plan_wizyt_pon.size(); i++)
			{
				if (a._plan_wizyt_pon[i]->get_godzina != wizyta->get_godzina)
				{
					a._plan_wizyt_pon.push_back(wizyta);
					cout << "Wizyta zapisana poprawnie!" << endl;
				}
			}
			sort(a._plan_wizyt_pon.begin(),a._plan_wizyt_pon.end());
			
			
		}
		if (wizyta->get_dzien == 2)
		{
			for (int i = 0; i < a._plan_wizyt_wt.size(); i++)
			{
				if (a._plan_wizyt_wt[i]->get_godzina != wizyta->get_godzina)
				{
					a._plan_wizyt_wt.push_back(wizyta);
					cout << "Wizyta zapisana poprawnie!" << endl;
				}
				
			}
			sort(a._plan_wizyt_wt.begin(), a._plan_wizyt_wt.end());

		}
		if (wizyta->get_dzien == 3)
		{
			for (int i = 0; i < a._plan_wizyt_sr.size(); i++)
			{
				if (a._plan_wizyt_sr[i]->get_godzina != wizyta->get_godzina)
				{
					a._plan_wizyt_sr.push_back(wizyta);
					cout << "Wizyta zapisana poprawnie!" << endl;
				}
				
			}
			sort(a._plan_wizyt_sr.begin(), a._plan_wizyt_sr.end());

		}
		if (wizyta->get_dzien == 4)
		{
			for (int i = 0; i < a._plan_wizyt_czw.size(); i++)
			{
				if (a._plan_wizyt_czw[i]->get_godzina != wizyta->get_godzina)
				{
					a._plan_wizyt_czw.push_back(wizyta);
					cout << "Wizyta zapisana poprawnie!" << endl;
				}
				
			}
			sort(a._plan_wizyt_czw.begin(), a._plan_wizyt_czw.end());

		}
		if (wizyta->get_dzien == 5)
		{
			for (int i = 0; i < a._plan_wizyt_pt.size(); i++)
			{
				if (a._plan_wizyt_pt[i]->get_godzina != wizyta->get_godzina)
				{
					a._plan_wizyt_pt.push_back(wizyta);
					cout << "Wizyta zapisana poprawnie!" << endl;

				}
				
			}
			sort(a._plan_wizyt_pt.begin(), a._plan_wizyt_pt.end());

		}

		return a;

		
};

Dietetyk Dietetyk:: wyswietl_plan_tygodnia_dietetyka(Dietetyk a) //metoda wyswietlajaca plan tygodniowy dietetyka
{
	   cout << "Poniedziałek: " << endl;
		for (int i = 0; i < a._plan_wizyt_pon.size(); i++)
		{
			cout << "Godzina: " << a._plan_wizyt_pon[i]->get_godzina << "Imie: " << a._plan_wizyt_pon[i]->_unnamed_Klient_->get_imie<< endl;
		}
		cout << "Wtorek: " << endl;
		for (int i = 0; i < a._plan_wizyt_wt.size(); i++)
		{
			cout << "Godzina: " << a._plan_wizyt_wt[i]->get_godzina << "Imie: " << a._plan_wizyt_wt[i]->_unnamed_Klient_->get_imie << endl;
		}
		cout << "Sroda: " << endl;
		for (int i = 0; i < a._plan_wizyt_sr.size(); i++)
		{
			cout << "Godzina: " << a._plan_wizyt_sr[i]->get_godzina << "Imie: " << a._plan_wizyt_sr[i]->_unnamed_Klient_->get_imie << endl;
		}
		cout << "Czwartek: " << endl;
		for (int i = 0; i < a._plan_wizyt_czw.size(); i++)
		{
			cout << "Godzina: " << a._plan_wizyt_czw[i]->get_godzina << "Imie: " << a._plan_wizyt_czw[i]->_unnamed_Klient_->get_imie << endl;
		}
		cout << "Piatek: " << endl;
		for (int i = 0; i < a._plan_wizyt_pt.size(); i++)
		{
			cout << "Godzina: " << a._plan_wizyt_pt[i]->get_godzina << "Imie: " << a._plan_wizyt_pt[i]->_unnamed_Klient_->get_imie << endl;
		}


};

