#include <exception>
#include<iostream>
using namespace std;

#include "Subskrypcja_.h"
#include "Karnet.h"

Subskrypcja::Subskrypcja(int a, int b) {
	_dzien = a;
	_miesiac = b;

}

void Subskrypcja::zawies() {
	cout << "Oplata przestanie byc pobierana cyklicznie." << endl;
	_dzien = 0;
	_miesiac = 0;
}


