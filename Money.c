#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");

	int Passengers = 100;

	int S_Passengers = 3 * Passengers / 4;

	int F_Passengers = 1 * Passengers / 4;

	int S_Price = 50;

	int F_Price = 50 * 2;

	printf("%d - общая выручка", S_Passengers * S_Price + F_Passengers * F_Price);

	return 0;
}
