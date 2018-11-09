#include "stdafx.h"
using namespace std;

extern void function(int i);

int a;

void fun(int tab[][1][2])
{
	return;
}


struct person
{
	string imie;
	string nazwisko;
	int wiek;
};

struct element
{
	int liczba;
	element* nastepny;
};

struct lista
{
	element* head;
};

void lista_add(lista &l1, int i)
{
	if (l1.head == nullptr)
	{
		l1.head = new element;
		l1.head->liczba = i;
		l1.head->nastepny = nullptr;
		return;
	}

	element* pomoc = l1.head;
	while (pomoc->nastepny != nullptr)
	{
		pomoc = pomoc->nastepny;
	}
	pomoc->nastepny = new element;
	pomoc->nastepny->liczba = i;
	pomoc->nastepny->nastepny = nullptr;
}

void lista_delete()
{

}


int main(int argc, char* argv[])
{
	//int size;
	//cin >> size;

	//kamil, katowice
	//&kamil (katowice)
	//*katowice (kamil)
	//*(&kamil + 1) (bartek)
	/*

	int* wskaznik;
	wskaznik = &size;

	int* wskaznik2 = new int;

	int* tab = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> tab[i];
	}

	delete wskaznik2;
	delete[] tab;



	person p1;
	p1.imie = "kamil";
	p1.nazwisko = "bob";
	p1.wiek = 14;
	*/

	lista l1;
	l1.head = nullptr;

	lista_add(l1, 5);
	lista_add(l1, 6);
	lista_add(l1, 1);

	//string s1 = "KAMIL MA KOta BLA";
	//cout << s1.length() << s1.size();

	//cin.get();

	//ifstream inp("kamil.txt");
	
	char c1;
	int i1;
	c1 = 48;
	i1 = c1;

	string st = "123456";
	int test = st[0]-48;
	bool b;

	int tab1[9] = { 3,2,1,4,5,6,9,8,7 };
	int suma[9] = { 0,0,0,0,0,0,0,0,0 };
	for (int i = 0; i < 9; i++)
	{
		for(int j =0; i < 9; j++)
		if (tab1[i] == j)
		{
			suma[j]++;
		}
			
	}
	for (int i = 0; i < 9; i++)
	{
		if (suma[i] != 1)
			b = false;
		else
			b = true;
	}

	int* b;
	char* c = new char;
	*c = 'a';
}