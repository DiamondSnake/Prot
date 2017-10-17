//lab 2 var 9 n4

/* Дана действительная квадратная матрица порядка 2n.
Получить новую матрицу, переставляя ее блоки размера
в порядке, указанном на рисунке  
|[] → []|
|↑    ↓ |
|[] ← []|*/

#include <iostream>
using namespace std;
int main()
{
	int x = 2; //число строк
	int y = 2; //число столбцов 
	int z;

	int **matr = new int*[x];

	for(int i=0; i<x; i++)
		matr[i] = new int[y];

	for (int i = 0; i < y; i++)
		for (int j = 0; j < y; j++)
		{
			cout << "matrica[" << i + 1 << "][" << j + 1 << "]: \n";
			cin >> matr[i][j];
		}
	cout << "Do: \n";
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cout << "[" << matr[i][j] << "]";
			if (j == y - 1)
				cout << "\n";
		}
	}

	for (int i = 0; i < x - 1; i++)
	{
		for (int j = 0; j < y - 1; j++)
		{
			z = matr[i][j + x -1];
			matr[i][j + x -1] = matr[i][j];
			matr[i][j] = z;

			z = matr[i + x - 1][j + x - 1];
			matr[i + x - 1][j + x - 1] = matr[i + x - 1][j];
			matr[i + x - 1][j] = z;

			z = matr[i + x - 1][j + x - 1];
			matr[i + x - 1][j + x - 1] = matr[i][j];
			matr[i][j] = z;
		}
	}

	cout << "\nPOCJlE: \n";
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cout << "[" << matr[i][j] << "]";
			if (j == y - 1)
				cout <<"\n";
		}
	}

		delete[] matr;
		system("pause");
		return 0;
}