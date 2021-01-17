#include "pch.h"
#include "CppUnitTest.h"
#include "../silownia_projekt/Karta_zdrowia.cpp"
#include "../silownia_projekt/Klient.cpp"
#include "../silownia_projekt/Trener.cpp"
#include "../silownia_projekt/Dietetyk.cpp"
#include "../silownia_projekt/Grupa_zajeciowa.cpp"
#include "../silownia_projekt/Wizyta_u_dietetyla.cpp"
#include "../silownia_projekt/Trening_personalny.cpp"
#include "../silownia_projekt/Karnet.cpp"
#include "../silownia_projekt/Wejœcie_jednorazowe.cpp"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestKartazdrowia
{
	TEST_CLASS(TestKartazdrowia)
	{
	public:
		
		TEST_METHOD(TestKonstruktora)
		{
			int masa = 70;
			int wzrost = 171;
			string grupa_krwi = "A-";
			Klient unnamed_Klient("a","b",1);
			Trener unnamed_Trener("c","d",2);
			Dietetyk unnamed_Dietetyk("e", "f", 3);

			Karta_zdrowia k1(masa, wzrost, grupa_krwi, &unnamed_Klient, &unnamed_Trener);

			Karta_zdrowia k2(masa, wzrost, grupa_krwi, &unnamed_Klient, &unnamed_Dietetyk);
			Assert::AreEqual(masa, k1._masa);
			Assert::AreEqual(masa, k2._masa);

			Assert::IsTrue(&unnamed_Klient== k1._unnamed_Klient_);
			Assert::IsTrue(&unnamed_Klient== k2._unnamed_Klient_);

			Assert::IsTrue(&unnamed_Trener== k1._unnamed_Trener_);
			Assert::IsTrue(&unnamed_Dietetyk== k2._unnamed_Dietetyk_);
		}
	};
}
