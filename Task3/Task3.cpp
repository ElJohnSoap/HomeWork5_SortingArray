/*Задание №3.
Написать программу «успеваемость». Пользователь вводит 10 оценок студента. Реализовать
меню для пользователя
 Вывод оценок (вывод содержимого массива)
 Пересдача экзамена (пользователь вводит номер элемента массива и новую оценку)
 Выходит ли стипендия (стипендия выходит, если средний бал не ниже 10.7) */

#include <iostream>
using namespace std;
const int size = 10;

double raiting(int arr[], int size) {
	double sredn;
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += arr[i];
	sredn = (double)sum / (double)size;
	return sredn;
}

int main()
{
	setlocale(LC_ALL, "ru");
	int c, point;
	bool exit = true;
	int  choise;
	srand(time(0));
	int arr[::size];
	for (int i = 0; i < ::size; i++) {
		arr[i] = rand() % 20;
		/*cout << "Введите оценку (" << i + 1 << ") - (0 - 20) " << endl;
		cin >> arr[i];
		if (arr[i] < 0 || arr[i] > 20) {
			cout << "Повторите ввод (0-20)";
			cin >> arr[i];
		}*/
		
	}
	while (exit) {
		cout << "1 - Пересдача.";
		cout << "2 - Нет пересдачи.\n";
		cout << "3 - Вывести список оценок.\n";
		cout << "4 - Стипендия (средний балл должен быть выше 10.7).\n";
		cout << "5 - Выход.\n";
		cin >> choise;

		switch (choise)
		{
		case 1:
			cout << "Пересдача. Выберите номер оценки - " << endl;
			cin >> c;
			cout << "Была оценка : " << arr[c-1] << endl;
			cout << "Введите новую оценку - " << endl;
			cin >> point;
			if (point < 0 || point > 20) {
				cout << "Повторите ввод (0-20)";
				cin >> point;
			}
			arr[c-1] = point;
			break;

		case 2:
			cout << "Пересдачи нет. \nСредний балл " << raiting(arr, ::size);
			break;

		case 3:
			for (int i = 0; i < ::size; i++)
				cout << "| " << i + 1 << " - " << arr[i] << " ";
			cout << endl;
			break;

		case 4:
			if (raiting(arr, ::size) >= 10.7)
				cout << "Стипендия есть\nСредний балл " << raiting(arr, ::size);
			else cout << "Стипендии нет\nСредний балл " << raiting(arr, ::size);
			break;

		case 5:
			exit = false;
			break;
		default:
			cout << "повторите ввод!";
			break;
		}
		if (!exit)
			break;
		cout << "\nПовторить? - 1\n";
		cout << "Выход - 0\n";
		cin >> exit;
	}
	
	return 0;
}

