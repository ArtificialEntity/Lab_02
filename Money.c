#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");

	int Passangers = 100;

	int S_Passangers = 3 * Passangers / 4;

	int F_Passangers = 1 * Passangers / 4;

	int S_Price = 50;

	int F_Price = 50 * 2;

	printf("%d - общая выручка", S_Passangers * S_Price + F_Passangers * F_Price);

	return 0;
}