
#include <iostream> // підключення бібліотеки.
using namespace std; // не треба постійно писати std.

int main()
{
	//Програма доступу 
	cout << "password line :" << "\n";
	cout << endl;
	string p1;
	int p2;
	cin >> p1 >> p2;
	cout << endl;
	string p3 = "PASSWORD IS CORRECT";
	string p4 = "PASSWORD IS INCORRECT";

	if (p1 == "password" && p2 == 123) {
		cout << p3 << "\n";
	}
	else {
		cout << p4 << "\n";
		return 0;
	}
	// Вивід значеннь в консоль.
	cout << endl;
	cout << "outputting values :" << "\n";
	int a = 900;// цілі числа .
	float a1; // чісла з плав. точк. max(7-8).
	a1 = 11.22;
	double a2 = 123.123; // чісла з плав. точк. max(14-16).
	string a3 = "111111"; // строка .
	bool a4 = false; //булівські значення true= 1 , false = 0.
	cout << a4 << "\n" << a1 << " " << a2 << "\n"; // оператор виведення значень в консоль.

	// Введення значень в консоль.
	cout << endl;
	cout << "entering values :" << "\n";
	string a6;
	int a7;
	cin >> a6; // оператор введення значень в консоль.
	cin >> a7;
	cout << a6 << " " << a7 << "\n";

	//Математ. операції,
	cout << endl;
	cout << "math operations :" << "\n";
	int b1;
	b1 = 10;
	int b2;
	b2 = b1; // значення b2 , буде дорівнювати значенню b1.
	cout << b2 << "\n";

	//Якщо , b4 більше b3 , виконати додавання  , якщо b3 більше b4  , виконати віднімання , якщо b3 = b4 вивести строку.
	int b3 = 4;
	int b4 = 4;
	string b5 = "Numbers are same";
	if (b3 < b4) {
		cout << b3 + b4 << "\n"; //Условний	оператор
	}
	else if (b3 > b4) {
		cout << b3 - b4 << "\n"; //Условний	оператор
	}
	else {
		cout << b5 << "\n";
	}
	//Цикли
	cout << endl;
	cout << "cycles :" << "\n";
	for (int i = 0; i <= 100; i++) { //Условний	оператор
		cout << i << " ";
	}
	
	cout<< endl <<"\n";

	int j = 1000;
	int c = 7;
	while (j >= 13) { //Условний	оператор
		j = j - c;
		cout << j << " ";
	}

}