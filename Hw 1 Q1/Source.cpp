/* Dov Brackman 209874916
Workshop in C++
Hw 1 Q1
This program creates a class that has a numerator and a denominator
the program then uses a bunch of ,methods to add them then simplify
the added fraction
*/

#include<iostream>
#include "Rational.h"
#include<string>
using namespace std;
int main()
{
	int num1, num2, num3;
	char junk;

	cout << "part 1.  set/get" << endl;
	cout << "enter a rational number:" << endl;
	cin >> num1 >> junk >> num2;
	Rational rat1;
	rat1.setNumerator(num1);
	rat1.setDenominator(num2);
	cout << "numerator: " << rat1.getNumerator() << endl;
	cout << "denominator: " << rat1.getDenominator() << endl;

	cout << "enter a rational number:" << endl;
	cin >> num1 >> junk >> num2;
	Rational rat2;
	rat2.setNumerator(num1);
	rat2.setDenominator(num2);
	rat2.print();
	cout << endl << endl;

	cout << "part 2.  equals" << endl;
	if (rat1.equal(rat2))
		cout << "The two numbers are equal" << endl;
	else
		cout << "The two numbers are different" << endl;
	cout << endl << endl;

	cout << "part 3. add" << endl;
	Rational ans = rat1.add(rat2);
	rat1.print();
	cout << " + ";
	rat2.print();
	cout << " = ";
	ans.print();
	cout << endl;

	return 0;
}
/* part 1.  set/get
enter a rational number:
1/4
numerator: 1
denominator: 4
enter a rational number:
4/9
4/9

part 2.  equals
The two numbers are different


part 3. add
1/4 + 4/9 = 25/36


part 1.  set/get
enter a rational number:
-4/9
numerator: -4
denominator: 9
enter a rational number:
3/-10
-3/10

part 2.  equals
The two numbers are different


part 3. add
-4/9 + -3/10 = -67/90
*/

