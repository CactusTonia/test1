#include "pch.h"  
#include "windows.h"  
#include "math.h"   
#include "iostream" 

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x, a, b, c;

	printf("������ ����� ����� x: ");
	scanf_s("%d", &x);

	a = x / 10;
	b = x % 10;
	c = x % 10;

	switch (a)
	{
	case 2: cout << "�������� "; break;
	case 3: cout << "�������� "; break;
	case 4: cout << "����� "; break;
	case 5: cout << "�'������� "; break;
	case 6: cout << "��������� "; break;
	}

	switch (b)
	{
	case 1: cout << "���� "; break;
	case 2: cout << "��� "; break;
	case 3: cout << "��� "; break;
	case 4: cout << "������ "; break;
	case 5: cout << "�'��� "; break;
	case 6: cout << "����� "; break;
	case 7: cout << "�� "; break;
	case 8: cout << "��� "; break;
	case 9: cout << "���'��� "; break;
	case 0: cout << ""; break;
	}

	switch (c)
	{
	case 1: cout << "��"; break;
	case 2: cout << "���� "; break;
	case 3: cout << "���� "; break;
	case 4: cout << "���� "; break;
	case 5: cout << "���� "; break;
	case 6: cout << "���� "; break;
	case 7: cout << "���� "; break;
	case 8: cout << "���� "; break;
	case 9: cout << "���� "; break;
	case 0: cout << "����"; break;
	}


	system("pause");
	return 0;

}
