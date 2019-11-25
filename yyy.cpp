#include "pch.h"  
#include "windows.h"  
#include "math.h"   
#include "iostream" 

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x, a, b, c;

	printf("¬вед≥ть номер м≥с€ц€ x: ");
	scanf_s("%d", &x);

	a = x / 10;
	b = x % 10;
	c = x % 10;

	switch (a)
	{
	case 2: cout << "двадц€ть "; break;
	case 3: cout << "тридцать "; break;
	case 4: cout << "сорок "; break;
	case 5: cout << "п'€тдес€т "; break;
	case 6: cout << "ш≥стдес€т "; break;
	}

	switch (b)
	{
	case 1: cout << "один "; break;
	case 2: cout << "два "; break;
	case 3: cout << "три "; break;
	case 4: cout << "чотири "; break;
	case 5: cout << "п'€ть "; break;
	case 6: cout << "ш≥сть "; break;
	case 7: cout << "с≥м "; break;
	case 8: cout << "в≥с≥м "; break;
	case 9: cout << "дев'€ть "; break;
	case 0: cout << ""; break;
	}

	switch (c)
	{
	case 1: cout << "р≥к"; break;
	case 2: cout << "роки "; break;
	case 3: cout << "роки "; break;
	case 4: cout << "роки "; break;
	case 5: cout << "рок≥в "; break;
	case 6: cout << "рок≥в "; break;
	case 7: cout << "рок≥в "; break;
	case 8: cout << "рок≥в "; break;
	case 9: cout << "рок≥в "; break;
	case 0: cout << "рок≥в"; break;
	}


	system("pause");
	return 0;

}
