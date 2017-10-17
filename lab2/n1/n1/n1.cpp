//lab 2 var 9 n 1
/* Задан массив действительных чисел. Если в данной
последовательности ни одно четное число не расположено после нечетного,
то получить все отрицательные члены последовательности. Иначе – все
положительные. Порядок следования чисел в обоих случаях заменяется на
обратный.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int x;
	cout << "vvedite razmer massiva: \n";
	cin >> x;

	int* mas = new int[x];

	cout << "vvedite chisla: \n";
	for (int i = 0; i < x; i++)
		cin >> mas[i];

	for (int i = 0; i < x; i++)
	{
		cout << "otvet:";

		if (abs(mas[i]) % 2 == 1 && mas[i + 1] % 2 == 0)
		{
			for (int i = x - 1; i >= 0; i--)
				if (mas[i] > 0)
					cout << "\n" << mas[i];
			break;
		}
		else
		{
			for (int i = x - 1; i >= 0; i--)
				if (mas[i] < 0)
					cout << "\n" << mas[i];
			break;
		}
	}
	delete[] mas;
	system("pause");
	return 0;
}