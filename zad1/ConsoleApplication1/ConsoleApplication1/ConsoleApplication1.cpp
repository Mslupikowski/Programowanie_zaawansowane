﻿
#include "pch.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <fstream>

using namespace std;
class osoba
{
public:

	string imie;
	string nazwisko;
	string wiek;
	string plec;
	string kod_pocztowy;
	string miasto;
	string ulica;
	int numer_domu;
	int numer_mieszkania;


	void pokaz_info(string imie, string nazwwisko, string wiek)
	{
		std::cout << imie << " " << nazwisko << " " << wiek << endl << "\n\n";
	}


};


int main()
{
	osoba osoba;
	std::cout << "Dodawanie nowej osoby:\n\n\n";
	int i;

	for (i = 0; i <= 2; i++)
	{
		std::cout << " Podaj imie:\n ";
		std::cin >> osoba.imie;

		std::cout << "Podaj nazwisko:\n ";
		std::cin >> osoba.nazwisko;

		std::cout << "Podaj swoj wiek:\n ";
		std::cin >> osoba.wiek;

		std::cout << "Podaj swoja plec:\n ";
		std::cin >> osoba.plec;

		std::cout << "Podaj Kod Pocztowy:\n ";
		std::cin >> osoba.kod_pocztowy;

		std::cout << "Podaj nazwe miasta:\n ";
		std::cin >> osoba.miasto;

		std::cout << "Podaj ulice:\n ";
		std::cin >> osoba.ulica;

		std::cout << "Podaj numer domu:\n ";
		std::cin >> osoba.numer_domu;

		std::cout << "Podaj numer mieszkania:\n ";
		std::cin >> osoba.numer_mieszkania;


		std::cout << "\n\nPoprawnie zakonczono wprowadzanie danych. \n\n\n\a";
		system("pause");
	}
	osoba.pokaz_info(osoba.imie, osoba.nazwisko, osoba.wiek);
}



