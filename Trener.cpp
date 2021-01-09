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


void Trener::wglad_do_karty_zdrowia(Klient *k) {
	
	cout << (k->_unnamed_Karta_zdrowia_)->_masa << endl;
}


