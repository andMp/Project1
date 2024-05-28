#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
	float a, b;
	cout << "Vvedit znach a: ";
	cin >> a;
	cout << "Vvedit znach b: ";
	cin >> b;
	cout << "Oberit bazanu diyu: \n";
	char var;
	do {
		system("cls");
		cout << "\tOberit bazanu diyu:\n";
		cout << " + \n";
		cout << " - \n";
		cout << " * \n";
		cout << " / \n";
		cout << "Esc - Vihid.\n";
		var = _getch();
		switch (var)
		{
		case '+':system("cls");
			cout << a << " + " << b << " = " << a + b<<'\n';
			system("pause");
			break;
		case '-':system("cls");
			cout << a << " - " << b << " = " << a - b << '\n';
			system("pause");
			break;
		case '*':system("cls");
			cout << a << " * " << b << " = " << a * b << '\n';
			system("pause");
			break;
		case '/':system("cls");
			if (b != 0)
				cout << a << " / " << b << " = " << a / b << '\n';
			else
				cout << "Na \"0\" ne dilat!\n";
			system("pause");
			break;
		}
	} while (var != 27);
}