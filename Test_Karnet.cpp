#include "pch.h"
#include "CppUnitTest.h"
#include "../silownia_projekt/Karnet.cpp"
#include "../silownia_projekt/Klient.cpp"
#include "../silownia_projekt/Recepcjonista.cpp"
#include "../silownia_projekt/Wejœcie_jednorazowe.cpp"
#include "../silownia_projekt/Dietetyk.cpp"
#include "../silownia_projekt/Trening_personalny.cpp"
#include "../silownia_projekt/Trener.cpp"
#include "../silownia_projekt/Grupa_zajeciowa.cpp"
#include "../silownia_projekt/Wizyta_u_dietetyla.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestKarnet
{
	TEST_CLASS(TestKarnet)
	{
	public:
		
		TEST_METHOD(TestKonstruktora)
		{
			bool a = true;
			int b = 123;
			int c = 4;
			int d = 7;
			Klient f("a","b",1775);
			Karnet k(a, b, c, d, &f);
			Assert::AreEqual(a, k.get_znizka());
			Assert::AreEqual(b, k.get_cena());
		}
		
	};
}
