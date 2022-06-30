#include <iostream>
#include <string>
using namespace std;

class Rational
{
	private:
		int numerator; 
		int denominator;
		void reduction(); // the promt told us to make it private

	public:
		void setNumerator(int); // this sets the numerator in the class
		void setDenominator(int); // this sets the denominator in the class
		int getNumerator(); // this gets the numerator and lets us access it
		int getDenominator(); // this gets the numerator and lets us access it
		void print(); // prints to console
		bool equal(Rational); // checks if the fractions are equale before they are reduced
		Rational add(Rational); // this adds two rational numbers (fractions)
	};

