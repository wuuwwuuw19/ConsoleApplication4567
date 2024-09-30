#include<iostream> 
#include<string> 
#include<windows.h> 
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a1, b1, c1, d1, e;
	cout << "Нажмите 1 для треугольника,нажмите 2 для четырехугольника" << endl;
	cin >> e;
	if (e == 1) {
		cout << "Введите первую сторону " << endl;
		cin >> a1;
		cout << "Введите вторую сторону " << endl;
		cin >> b1;
		cout << "Введите третью сторону " << endl;
		cin >> c1;
		if (a1 + b1 > c1 && a1 + c1 > b1 && b1 + c1 > a1)
		{
			if (a1 == b1 && b1 == c1)
			{
				cout << "Треугольник равносторонний" << endl;
			}
			else if (a1 == b1 || a1 == c1 || b1 == c1)
			{
				cout << "Треугольник равнобедренный" << endl;
			}
			else
			{
				cout << "Треугольник разносторонний" << endl;
			}
		}
		else
		{
			cout << "Стороны не образуют треугольник" << endl;
		}
	}
	
	if (e == 2)
	{
		cout << "Введите первую сторону " << endl;
		cin >> a1;
		cout << "Введите вторую сторону " << endl;
		cin >> b1;
		cout << "Введите третью сторону " << endl;
		cin >> c1;
		cout << "Введите четвертую сторону " << endl;
		cin >> d1;
		if (a1 == b1 && b1 == c1 && c1 == d1) {
			cout << "Четырехугольник является правильным квадратом." << endl;
		}
		else if (a1 == c1 && b1 == d1) {
			cout << "Четырехугольник является прямоугольником." << endl;
		}
		else {
			cout << "Четырехугольник не является квадратом или прямоугольником." << endl;
		}
	}

	return 0;
}