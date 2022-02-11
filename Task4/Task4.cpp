/*Необходимо отсортировать первые две трети массива в порядке возрастания, если среднее
арифметическое всех элементов больше нуля; иначе - лишь первую треть. Остальную часть
массива не сортировать, а расположить в обратном порядке.*/
#include <iostream>
using namespace std;

void print(int arr[], int size)
{
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "\t";
		if ((i + 1) % 10 == 0)
			cout << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	const int size = 20;
	int arr[size];
	int sredn, sum = 0, partArr;
	bool change = false;
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 50 - 25;
		cout << arr[i] << "\t";
		if ((i+1) % 10 == 0)
			cout << endl;
		sum += arr[i];
	}
	sredn = sum / size;
	cout << "\nСреднеарифметическое = " << sredn << endl;
	if  (sredn > 0) partArr = (size / 3) * 2;
	else partArr = size / 3;
	cout << "Будет отсортировано - " << partArr << " элементов массива\n";
	for (int i = 0; i < partArr; i++) {
		change = false;
		for (int j = partArr-1; j > i; j--) {
			if (arr[j] < arr[j - 1]) {
				swap(arr[j], arr[j - 1]);
				change = true;

			}
		}
		if (!change)
			break;
	}
	//print(arr, size);
	cout << "\nОтсортированная часть массива\n";
	print(arr, partArr);
	cout << endl;
	cout << "\nОставшаяся часть массива:\n";
	for (int i = partArr; i < size; i++)
		cout << arr[i]<< "\t";
	cout << endl;
	cout << "\nВ обратном порядке:\n";
	for (int i = partArr, j = size-1; i < j; i++, j--) 
		swap(arr[i], arr[j]);
	for (int i = partArr; i < size; i++)
		cout << arr[i] << "\t";
	cout << endl;
	

	return 0;
}
