//lab 2 var 9 n2

/* Задан массив действительных чисел. Переставить члены
последовательности так, чтобы сначала расположились все ее
неотрицательные члены, а потом – все отрицательные. Порядок следования,
как среди неотрицательных членов, так и среди отрицательных должен быть
сохранен прежним.*/

#include <iostream>

using namespace std;

int main()
{
	int x,y;
	cout << "vvedite razmer massiva: \n";
	cin >> x;

	int* mas = new int[x];

	cout << "vvedite znacheniya: \n";
	for (int i = 0; i < x; i++)
		cin >> mas[i];

	cout << "otvet: ";

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			if (mas[j] < mas[j + 1] && mas[j + 1] == 0)
			{
				y = mas[j];
				mas[j] = mas[j + 1];
				mas[j + 1] = y;
			}
			if (mas[j] < mas[j + 1] && mas[j] < 0 && mas[j + 1] > 0)
			{
				y = mas[j];
				mas[j] = mas[j + 1];
				mas[j + 1] = y;
			}
		}
		cout << "\n" << mas[i];
	}
	delete[] mas;
	system("pause");
	return 0;
}