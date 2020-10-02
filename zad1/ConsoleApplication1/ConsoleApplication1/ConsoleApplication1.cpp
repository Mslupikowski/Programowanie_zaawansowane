
#include "pch.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <fstream>



using namespace std;


int main()
{

	int liczba;
	int a = 0;
	do
	{

		system("cls"); 

		cout << "\n\t\t\tREJESTR OSOBOWY\n\n\n";
		cout << "\tWpisz numer opcji: \n\n\t";
		cout << "1. Dodawanie nowej osoby.\n\t";
		cout << "2. Modyfikowanie danych osob w rejestrze.\n\t";
		cout << "3. Usuwanie osob z rejestru.\n\t";
		cout << "4. Wyszukowanie osob z rejestru.\n\t";
		cout << "5. Zakonczenie pracy z programem\n\n\t";
		cout << "Wybieraj znaki 1,2,3,4, lub 5 - zakoncz\n\n\t";
		cout << "Podaj numer danej opcji: ";
		cin >> liczba;
		cout << endl;

		switch (liczba)

		{
			
		case 1:
			
			system("cls");

			cout << "Dodawanie nowej osoby:\n\n\n";
			cout << "Podaj liczbe osob do wpisania: ";
			int n; 
			cin >> n;

			char TabImie[200][20];
			char TabNazwisko[200][50];
			char TabPlec[200];
			char TabKod_Pocztowy[20];
			char TabMiasto[200];
			char TabUlica[200];
			int TabNumer_domu[200];
			int TabNumer_mieszkania[200];
			int TabWiek[200];


			for (int i = 0; i < n; i++)
			{
				cout << "\nPodaj imie: ";
				cin >> TabImie[i];
				cout << "\nPodaj nazwisko: ";
				cin >> TabNazwisko[i]; 
				cout << "\nPodaj swoj wiek ";
				cin >> TabWiek[i];
				cout << "\nPodaj swoja plec ";
				cin >> TabPlec[i];
				cout << "\nPodaj swoj kod pocztowy ";
				cin >> TabKod_Pocztowy[i];
				cout << "\nPodaj swoje miasto ";
				cin >> TabMiasto[i];
				cout << "\nPodaj swoja ulice ";
				cin >> TabUlica[i];
				cout << "\nPodaj swoj numer domu ";
				cin >> TabNumer_domu[i];
				cout << "\nPodaj swoj numer mieszkania ";
				cin >> TabNumer_mieszkania[i];
				cout << "\nPodaj dane nastepnej osoby:\n\n ";
			}

			
					cout << "Ilosc wprowadzonych osob: " << n;
					system("pause");


			cout << "\n\nPoprawnie zakonczono wprowadzanie danych. \n\n\n\a";
			break;
			system("pause");



		case 2:

			// brak narazie

		case 3:
			
			// brak narazie

		case 4:

			system("cls");

			cout << "Wyswietlanie osob na liscie: \n\n";
			cout << "Obecnie na liscie znajduja sie nastepujace osoby:\n\n ";

			for (int i = 0; i < n; i++)
			{
				cout << TabNazwisko[i] << " " << TabImie[i] << " " << TabWiek[i]  << endl;
			}
			break;

			system("pause");

		case 5:
			
			system("cls");
			cout << "\n\tDziekujemy za skorzystanie z naszego programu!\n\n";
			

			system("pause");

		
			


			

			//default:
			//cout<< "W programie nie przewidziano takiej opcji wpisz poprawny numer opcji!";

		}

	} while (liczba != 5);

	
}

