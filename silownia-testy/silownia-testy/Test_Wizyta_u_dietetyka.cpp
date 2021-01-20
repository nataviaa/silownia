#include "pch.h"
#include "CppUnitTest.h"
#include "../silownia_projekt/Klient.cpp"
#include "../silownia_projekt/Wizyta_u_dietetyla.cpp"
#include "../silownia_projekt/Dietetyk.cpp"
#include "../silownia_projekt/Grupa_zajeciowa.cpp"
#include "../silownia_projekt/Trening_personalny.cpp"
#include "../silownia_projekt/Trener.cpp"
#include "../silownia_projekt/Karnet.cpp"
#include "../silownia_projekt/Wej�cie_jednorazowe.cpp"




using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestWizytaudietetyka
{
	TEST_CLASS(TestWizytaudietetyka)
	{
	public:
		
		TEST_METHOD(TestKonstruktora)
		{
			double godzina= 10.5;
			int cena = 40;
			int dzien = 4;
			
			Klient unnamed_Klient("a", "b", 1);
		
			Dietetyk unnamed_Dietetyk("e", "f", 3);

			Wizyta_u_dietetyka w1(dzien, godzina, cena, &unnamed_Dietetyk, &unnamed_Klient);

			Assert::AreEqual(godzina, w1.get_godzina());
			Assert::AreEqual(dzien, w1.get_dzien());

			Assert::IsTrue(&unnamed_Klient== w1._unnamed_Klient_);
			Assert::IsTrue(&unnamed_Dietetyk== w1._unnamed_Dietetyk_);
		}
	};
}
