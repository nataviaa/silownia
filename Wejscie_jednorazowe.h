#include <exception>
using namespace std;

#ifndef __Wej�cie_jednorazowe_h__
#define __Wej�cie_jednorazowe_h__


class Wejscie_jednorazowe
{
private:
	int _dzien;
	int _miesiac;
	int _cena;
public:
	Wejscie_jednorazowe(int, int,int);
	int get_dzien();
	int get_cena();
	
};

#endif
