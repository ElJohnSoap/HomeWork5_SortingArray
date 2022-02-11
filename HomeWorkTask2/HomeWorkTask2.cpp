/*2. Дан массив случайных чисел в диапазоне от –20 до +20.
Необходимо найти позиции крайних отрицательных
элементов (самого левого отрицательного элемента
и самого правого отрицательного элемента) и отсортировать элементы, находящиеся между ними.*/

#include <iostream>
using namespace std;
#define Endl cout << endl;
int main()
{
	srand(time(0));
	const int size = 20;
	int arr[size];
	int left, right;
	bool change = false;

	for (int i = 0; i < size; i++)
		arr[i] = rand() % 40 - 20;

	for (int i = 0; i < size; i++) {
		cout << arr[i] << "\t";
		if (!((i + 1) % 10))
			Endl;
	}
	Endl;
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) {
			left = i;
			break;
		}
	}
	for (int i = size-1; i >=0; i--) {
		if (arr[i] < 0) {
			right = i;
			break;
		}
	}
	cout << "left = " << left << "\t" << "right - " << right;
	Endl;

	for (int i = left; i <=right; i++)
	{
		change = false;
		for (int j = right; j > i; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				swap(arr[j], arr[j - 1]);
				change = true;
			}
		}
	}
	
	for (int i = left; i <=right; i++) {
		cout << arr[i] << "\t";
		if (!((i + 1) % 10))
			Endl;
	}
	Endl;
	Endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "\t";
		if (!((i + 1) % 10))
			Endl;
	}
		
	Endl;
	return 0;
}