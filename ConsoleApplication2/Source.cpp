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
	cout << "������� ����� �������: ";
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
		// �������� ��������� ���������� ��������� �����������, ���� �� �������� � ������������ ��������������� 20% ������. ������ ����������������� ��������� � ���� ������ (����� �� 1 �� 7)
		double st = 5.52;
		double dl;
		int day;
		cout << "������� ������������ ��������� ";
		cin >> dl;

		cout << "������� ���� ������ ";
		cin >> day;

		cout << "����� ����� " << dl * st << endl;
		switch (day)
		{
		case 6:
		case 7:
		{
			cout << "����� � ������ ������ ����� " << (dl *st) - ((dl* st) * 0.2) << endl;
		}
		break;

		default:
		{
			cout << "����� ����� " << dl * st << endl;
		}
		break;
		}
	}

	case 2:
	{
		// ��������� ��������� ������� � ������ ������. ������ 5% ���������������, ���� ����� ������� ��������� 500 ����� � 10%, ���� ������ 1000 �����.
		int st, sk;

		cout << "������� ��������� ������� : ";
		cin >> st;

		if (st > 500 && st < 1000)

		{
			cout << "����� ��� ������ = " << st << endl;
			cout << "����� �� ������� 5% = " << st - st*0.05 << endl;
		}

		else if (st > 1000)

		{
			cout << "����� ��� ������ = " << st << endl;
			cout << "����� �� ������� 10% = " << st - st*0.1 << endl;
		}

		else if (st < 500)

		{
			cout << "����� ��� ������ = " << st << endl;
		}

		break;
	}

	case 3:
	{
		// ������ � ������ ����� �� 1 �� 12. �� ������ ������ ������ ��������� � ������� ����. ���� ������������ ������ ������������ �����, ��������� ������ ������ ��������� �� ������
		int x;
		cout << "������� ����� �� 1 �� 12 : ";
		cin >> x;
		if (x==1 || x==2 || x==12)
		{
			cout << x << " ����� - ���� " << endl;
		}
		else if (x==3 || x == 4 || x == 5)
		{
			cout << x << " ����� - ����� " << endl;
		}
		else if (x == 6 || x == 7 || x == 8)
		{
			cout << x << " ����� - ���� " << endl;
		}
		else if (x == 9 || x == 10 || x == 11)
		{
			cout << x << " ����� - ����� " << endl;
		}
		else if (x <=0 || x>12)
		{
			cout << " ������� ����� ���� �� ���������� " << endl;
		}
		break;
	}

	case 4:
	{
		//	���� ��� ����� a, b, c.����������, ������� �� ����� ��� ���� �� ���� ���� ������
		int a, b, c;
		cout << "������� a: ";
		cin >> a;
		cout << "������� b: ";
		cin >> b;
		cout << "������� c: ";
		cin >> c;

	/*	if (a == b || b == c || c == a)
			cout << "������� ������ ����� " << endl;
		else
			cout << "������ ����� ����! " << endl;*/

		(a == b || b == c || c == a) ? cout << "������� ������ ����� " << endl : cout << "������ ����� ����! " << endl;
		break;
	}

	case 5:
	{
		// �������� ��������� ��� ����������� ������� ����� �� ������� �������� ������� � ������� ���������(���� � � 6 �� 12, ���� � � 12 �� 18, ����� � � 18 �� 24, ���� � � 0 �� 5)
		int x;
		cout << "������� ����� ����� : ";
		cin >> x;
		if (6<=x && x<=12)
		{
			cout << x << " ����� - ���� " << endl;
		}
		else if (12 <= x && x <= 18)
		{
			cout << x << " ����� - ���� " << endl;
		}
		else if (18 <= x && x <= 24)
		{
			cout << x << " ����� - ����� " << endl;
		}
		else if (x >= 0 && x <= 5)
		{
			cout << x << " ����� - ���� " << endl;
		}
		else if (x < 0 || x>24)
		{
			cout << " ������� ����� �� ���������� " << endl;
		}
		break;
	}

	case 6:
	{
	    // ���� ����������� �����.����������:
		// a.������ �� � ���� ����� 5;
		// b.������ �� � ���� ����� �.
		int a, b;
		cout << "������� � : ";
		cin >> a;
		cout << "������� b : ";
		cin >> b;
		
		if (a == 5 || b == 5)
			cout <<" ���� �� ����� = 5 "<< endl;

		else if (a==5)
			cout << " ����� � = 5 " << endl;

		else
			cout << " Error " << endl;

		break;
	}

	case 7:
	{
		// �������� ���������, ������� ��� ����� ����� � ��������� �� 1 �� 99 ��������� � ���� ����� "�������" � ���������� �����. ��������, 1 �������, 5 ������, 42 �������
		int x;
		cout << "������� ����� : ";
		cin >> x;
		if (x == 1)
			cout << x << " �������" << endl;
		else if (x<2 && 4<x)
			cout << x << " �������" << endl;
		break;
	}

	default:
	{
		cout << "������ ������� ����! " << endl;
	}
	break;
	}



}
