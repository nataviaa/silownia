#include <exception>
#include <string>
#include <vector>
using namespace std;

#include "Dietetyk.h"
#include "Wizyta_u_dietetyla.h"
#include "Pracownik.h"

Dietetyk::Dietetyk(string a, string b, int id){
	_imie=a;
	_nazwisko=b;
	_id=id;
}
int Dietetyk::getID(){
	return _id;
}

