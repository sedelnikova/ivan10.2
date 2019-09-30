// ivan 10.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//2. Дано целое число N (> 0). Найти произведение 1.1 • 1.2 • 1.3 • . . . (N сомножителей).


#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double  s;
	int n;
	cout << "введите число N (N>0)" << endl;
	cin >> n;
	s = 1.0;
	for (double i = 1.1, j = 1.0; j <= n; j++, i = i + 0.1)
	{
		s = s * i;
	}

	cout << " произведение =  " << s << endl;
	return 0;
}