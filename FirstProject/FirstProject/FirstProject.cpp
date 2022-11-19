#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

const int POINTS_SIZE = 5;

int main()
{
	SetConsoleCP(1251); // Ввод с консоли в кодировке 1251
	SetConsoleOutputCP(1251); // Вывод на консоль в кодировке 1251. Нужно только будет изменить шрифт консоли на Lucida Console или Consolas
	double points[POINTS_SIZE * 2];
	for (int i = 0; i < POINTS_SIZE; ++i) {
		cout << "Enter coordinates of the "<< i <<" point" << endl;
		cout << "x: ";
		cin >> points[2*i];
		cout << "y: ";
		cin >> points[2*i + 1];
	}

	double square = 0;
	for (int i = 0; i < POINTS_SIZE; ++i) {
		
		double a_x = points[2* i];
		double a_y = points[2* i + 1];
		double b_x = points[(2 * i+2)% (POINTS_SIZE * 2)];
		double b_y = points[(2 * i + 3)%(POINTS_SIZE*2)];
		cout << a_x << " " << b_y << " " << b_x << " " << a_y << endl;

		square += (a_x * b_y - b_x * a_y);
	//square += 0.5 * (points[2*i-1] * points[(2 * i + 1) % POINTS_SIZE] - points[(2 * i) % POINTS_SIZE] * points[2*i-1]);
	}
	square = 0.5 * abs(square);
	cout << "Square of the pentagon: " << square;

	return 0;
}
