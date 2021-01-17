#include "pch.h"
#include "CppUnitTest.h"
#include "../silownia_projekt/Wejście_jednorazowe.cpp"
#include "../silownia_projekt/Recepcjonista.cpp"
#include "../silownia_projekt/Klient.cpp"
#include "../silownia_projekt/Trener.cpp"
#include "../silownia_projekt/Dietetyk.cpp"
#include "../silownia_projekt/Karnet.cpp"
#include "../silownia_projekt/Trening_personalny.cpp"
#include "../silownia_projekt/Grupa_zajeciowa.cpp"
#include "../silownia_projekt/Wizyta_u_dietetyla.cpp"








using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestWejściejednorazowe
{
	TEST_CLASS(TestWejściejednorazowe)
	{
	public:
		
		TEST_METHOD(TestKonstruktora)
		{
			int a = 7;
			int b = 54;
			Klient d("a", "b", 1778);
			Wejscie_jednorazowe wj(a, b, &d);
			Assert::AreEqual(a, wj.get_dzien());
		
		}
	};
}
