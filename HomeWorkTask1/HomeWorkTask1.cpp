/*1. Дан массив чисел размерностью 10 элементов. Написать
функцию, которая сортирует массив по возрастанию
или по убыванию, в зависимости от третьего параметра
функции. Если он равен 1, сортировка идет по убыванию, если 0, то по возрастанию. Первые 2 параметра
функции — это массив и его размер, третий параметр
по умолчанию равен 1.*/

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

