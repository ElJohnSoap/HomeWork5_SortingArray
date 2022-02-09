/*������� �1:
�������� ���������, ����������� ���������� ����������� ������� ����� ����� �������
����������� ����������.
����� ������������ � ������� ���������� �������� � ��� ���� �������������� ����� ���� ������
������ ������������ �� ���������� ����������. ������� ���������� ������ ��������,
� ��� � ����������� �������� ������
� ����� ��� ��� while (leftMark <= rightMark) ������� �� while (change)*/

#include <iostream>
using namespace std;

template <typename T>
void myShakerSort(T arr [], int size)
{
	bool change = true;
	int leftMark = 1;
	int rightMark = size - 1;
	while (change)
	{	
		change = false;
		for (int j = rightMark; j >= leftMark; j--)
		{
			if (arr[j - 1] > arr[j])
			{
				swap(arr[j - 1], arr[j]);
			    change = true;
			}			
		}
		leftMark++;
		if (!change) break;


		for (int i = leftMark; i <= rightMark; i++)
			if (arr[i - 1] >= arr[i])
			{
				swap(arr[i - 1], arr[i]);
				change = true;
			}
		rightMark--;

		cout << "\n��������: " << leftMark << endl; // �������� ���������� ��������
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " | ";
		}
		cout << endl;
	}
	
}

int main()
{
	setlocale(LC_ALL, "rus");

	const int size = 20;
	
	int arr[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 50; // ������ �������� �� ��������
		cout << arr[i] << " | ";
	}

	myShakerSort(arr, size); // ����������

	cout << "\n������ ����� ����������:\n";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " | ";
	}
	cout << endl;
	return 0;
}