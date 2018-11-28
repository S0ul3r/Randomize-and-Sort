#include "Header.h"

void randomizer(int* tab, int n, int a, int z)
{
	for (int i = 0; i < n; i++)
		tab[i] = rand() % (z - a) + a;
}

void swap(int& a, int& b)
{
	int c = b;
	b = a;
	a = c;
}

void sortasc(int* tab, int n)
{
	for (int i = 1; i < n; i++) {
		int j = i;
		while (tab[j] < tab[j - 1] && j>0)
		{
			swap(tab[j], tab[j- 1]);
			j--;
		}
	}
}

void sortdesc(int* tab, int n)
{
	for (int i = 1; i < n; i++) {
		int j = i;
		while (tab[j] > tab[j - 1] && j>0)
		{
			swap(tab[j], tab[j - 1]);
			j--;
		}
	}
}
