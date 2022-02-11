/*Задание №2.
Написать программу, выполняющую сортировку одномерного массива целых чисел методом
вставок.*/

#include <iostream>
using namespace std;

int main()
{
	srand(time(0));
	const int size = 20;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 50;
		cout << arr[i] << " ";
		if ((i + 1) % 10 == 0) cout << endl;
	}
	for (int i = 1; i < size; i++)
		for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--) // пока j>0 и элемент j-1 > j, x-массив int
			swap(arr[j - 1], arr[j]);
}
