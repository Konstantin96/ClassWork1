#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <conio.h>
#include <Windows.h>
#include <time.h>

using namespace std;


int main()
{
start:
	setlocale(LC_ALL, "Rus");
	int nz;
	cout << "Введите номер задания: ";
	cin >> nz;
	HANDLE Hconsole;

	Hconsole = GetStdHandle(STD_OUTPUT_HANDLE);

	srand(time(NULL));
	int rnd = 1 + rand() % 250;
	int rn = 88;

	SetConsoleTextAttribute(Hconsole, rnd);

	switch (nz)
	{
	case 1:
	{
		// Написать программу вычисления стоимости переговоров, если по субботам и воскресеньям предоставляется 20% скидка. Ввести продолжительность разговора и день недели (цифра от 1 до 7)
		double st = 5.52;
		double dl;
		int day;
		cout << "Введите длительность разговора ";
		cin >> dl;

		cout << "Введите день недели ";
		cin >> day;

		cout << "Сумма равна " << dl * st << endl;
		switch (day)
		{
		case 6:
		case 7:
		{
			cout << "Сумма с учётом скидки равна " << (dl *st) - ((dl* st) * 0.2) << endl;
		}
		break;

		default:
		{
			cout << "Сумма равна " << dl * st << endl;
		}
		break;
		}
	}

	case 2:
	{
		// Вычислить стоимость покупки с учетом скидки. Скидка 5% предоставляется, если сумма покупки превышает 500 тенге и 10%, если больше 1000 тенге.
		int st, sk;

		cout << "Введите стоимость покупки : ";
		cin >> st;

		if (st > 500 && st < 1000)

		{
			cout << "Сумма без скидки = " << st << endl;
			cout << "Сумма со скидкой 5% = " << st - st*0.05 << endl;
		}

		else if (st > 1000)

		{
			cout << "Сумма без скидки = " << st << endl;
			cout << "Сумма со скидкой 10% = " << st - st*0.1 << endl;
		}

		else if (st < 500)

		{
			cout << "Сумма без скидки = " << st << endl;
		}

		break;
	}

	case 3:
	{
		// Ввести с экрана число от 1 до 12. По номеру месяца выдать сообщение о времени года. Если пользователь введет недопустимое число, программа должна выдать сообщение об ошибке
		int x;
		cout << "Введите число от 1 до 12 : ";
		cin >> x;
		if (x==1 || x==2 || x==12)
		{
			cout << x << " Месяц - Зима " << endl;
		}
		else if (x==3 || x == 4 || x == 5)
		{
			cout << x << " Месяц - Весна " << endl;
		}
		else if (x == 6 || x == 7 || x == 8)
		{
			cout << x << " Месяц - Лето " << endl;
		}
		else if (x == 9 || x == 10 || x == 11)
		{
			cout << x << " Месяц - осень " << endl;
		}
		else if (x <=0 || x>12)
		{
			cout << " Данного время года не существует " << endl;
		}
		break;
	}

	case 4:
	{
		//	Даны три числа a, b, c.Определить, имеется ли среди них хотя бы одна пара равных
		int a, b, c;
		cout << "Введите a: ";
		cin >> a;
		cout << "Введите b: ";
		cin >> b;
		cout << "Введите c: ";
		cin >> c;

	/*	if (a == b || b == c || c == a)
			cout << "Имеется парное число " << endl;
		else
			cout << "Парных чисел нету! " << endl;*/

		(a == b || b == c || c == a) ? cout << "Имеется парное число " << endl : cout << "Парных чисел нету! " << endl;
		break;
	}

	case 5:
	{
		// Написать программу для определения времени суток по данному текущему времени и вывести сообщение(утро – с 6 до 12, день – с 12 до 18, вечер – с 18 до 24, ночь – с 0 до 5)
		int x;
		cout << "Введите время суток : ";
		cin >> x;
		if (6<=x && x<=12)
		{
			cout << x << " Часов - Утро " << endl;
		}
		else if (12 <= x && x <= 18)
		{
			cout << x << " Часов - День " << endl;
		}
		else if (18 <= x && x <= 24)
		{
			cout << x << " Часов - Вечер " << endl;
		}
		else if (x >= 0 && x <= 5)
		{
			cout << x << " Часов - Ночь " << endl;
		}
		else if (x < 0 || x>24)
		{
			cout << " Данного время не существует " << endl;
		}
		break;
	}

	case 6:
	{
	    // Дано двухзначное число.Определить:
		// a.входит ли в него цифра 5;
		// b.входит ли в него цифра а.
		int a, b;
		cout << "Введите а : ";
		cin >> a;
		cout << "Введите b : ";
		cin >> b;
		
		if (a == 5 || b == 5)
			cout <<" Одно из чисел = 5 "<< endl;

		else if (a==5)
			cout << " Число а = 5 " << endl;

		else
			cout << " Error " << endl;

		break;
	}

	case 7:
	{
		// Написать программу, которая при вводе числа в диапазоне от 1 до 99 добавляет к нему слово "копейка" в правильной форме. Например, 1 копейка, 5 копеек, 42 копейки
		int x;
		cout << "Введите число : ";
		cin >> x;
		if (x == 1)
			cout << x << " копейка" << endl;
		else if (x<2 && 4<x)
			cout << x << " копейки" << endl;
		break;
	}

	default:
	{
		cout << "Такого задания нету! " << endl;
	}
	break;
	}



}
