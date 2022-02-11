/*1. ��� ������ ����� ������������ 10 ���������. ��������
�������, ������� ��������� ������ �� �����������
��� �� ��������, � ����������� �� �������� ���������
�������. ���� �� ����� 1, ���������� ���� �� ��������, ���� 0, �� �� �����������. ������ 2 ���������
������� � ��� ������ � ��� ������, ������ ��������
�� ��������� ����� 1.*/

#include <iostream>
using namespace std;
#define Endl cout<<endl;

void sort(int arr[], int size, int a = 1)
{
    bool change = false;
    
    for (int i = 0; i < size; i++) 
    {
        change = false;
        for (int j = size - 1; j > i; j--) 
        {
            if (a) 
            {
                if (arr[j] < arr[j - 1]) 
                {
                    swap(arr[j], arr[j - 1]);
                    change = true;
                }
            }
            else 
            {
                if (arr[j] > arr[j - 1]) {
                    swap(arr[j], arr[j - 1]);
                    change = true;
                }
            }
        }
    if (!change)
    break;
    }
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << "\t";
    Endl;
}

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(0));
    const int size = 10;
    int arr[size];
    for (int i = 0; i < size; i++)
        arr[i] = rand() % 20;
    print(arr, size);
    sort(arr, size, 0);
    print(arr, size);
    sort(arr, size);
    print(arr, size);
    return 0;
}

