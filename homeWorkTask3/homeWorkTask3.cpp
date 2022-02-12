/*3. Дан массив из 20 целых чисел со значениями от 1 до 20.
Необходимо:
■ написать функцию, разбрасывающую элементы массива произвольным образом;
■ создать случайное число из того же диапазона и найти
позицию этого случайного числа в массиве;
■ отсортировать элементы массива, находящиеся слева от найденной позиции по убыванию, а элементы
массива, находящиеся справа от найденной позиции
по возрастанию.*/

#include <iostream>
using namespace std;
#define Endl cout << endl;
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++) {        
        cout << arr[i] << "\t";
        if (!((i + 1) % 10))cout << endl;
    }
}
void randomArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        swap(arr[i], arr[rand() % 20]);
    }
}
int main()
{
    setlocale(LC_ALL, "ru");
    const int size = 20;
    int arr[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
    print(arr, size);
    Endl;
    randomArr(arr, size);
    print(arr, size);
    Endl;
    int randDigit = rand() % 20;
    cout << "число - " << randDigit;
    Endl;
    int count = 0;
    while (arr[count] != randDigit) {
        count++;
    }
    cout << "позиция - " << count;
    Endl;
    
    for (int i = 0; i < size; i++) {
        for (int j = size - 1; j > i; j--) {
            if (j > count) {
                if (arr[j] < arr[j - 1])
                    swap(arr[j], arr[j - 1]);                   
            }
            else {
                if (arr[j] > arr[j - 1])
                    swap(arr[j], arr[j - 1]);   
            }

        }
    }
    
    print(arr, size);
    return 0;
}