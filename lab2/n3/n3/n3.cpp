//lab 2 var 9 n3

/*В целочисленном массиве упорядочить по убыванию элементы,
стоящие между первым максимальным и последним минимальным элементами.*/

#include <iostream>
using namespace std;
int main() {
	int x,y;
	cout << "vvedite razmer mas: \n";
	cin >> x;

	int* mas = new int[x];

	cout << "vvedite znacheniya: \n";
	for (int i = 0; i < x; i++)
		cin >> mas[i];

	int max = mas[0], min = mas[0], maximum = 0, minimum = 0;
	for (int i = 1; i < x; i++)
	{
		if (max < mas[i])
		{
			maximum = i;
			max = mas[i];
		}
		if (min >= mas[i])
		{
			minimum = i;
			min = mas[i];
		}
	}

	cout << "otvet: \n";

	for (int i = maximum + 1; i < minimum; i++)
	{
		for (int j = minimum - 1; j > i; j--)
			if (mas[j] > mas[j - 1])
			{
				y = mas[j];
				mas[j] = mas[j - 1];
				mas[j - 1] = y;
			}
	}

	for (int i = 0; i<x; i++)
		cout << mas[i] << endl;

	delete[] mas;
	system("pause");
	return 0;
}