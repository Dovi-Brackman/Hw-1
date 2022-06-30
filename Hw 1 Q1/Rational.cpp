#include "Rational.h" // include the class
#include<iostream> 
using namespace std;

void Rational::setNumerator(int num) // method to set numerator
{
	numerator = num; // whatever the input is that is the numerator
}

void Rational::setDenominator(int den) // method to set denominator
{
	if (den == 0) // if the user inputted denominator is zero 
	{
		setDenominator(1); // we call this very function so that the input is 1 which then sets
		// the denominator to 1
		return;
	}
	else if (den < 0) // if its a negative number
	{
		setDenominator(den * -1); // we want to make the denominator positive by calling this function again
		setNumerator(numerator * -1); // we also set the numerator to be negative
		return;
		
	}
	denominator = den; // set the input to be the denominator
}

int Rational::getNumerator() // allows us access to numerator
{
	return numerator;
}

int Rational::getDenominator() // allows us access to denominator
{
	return denominator;
}

void Rational::print() // prints the two numbers as a fraction
{
	cout << numerator << "/" << denominator;
}

bool Rational::equal(Rational num) // checks if the two fractiosn are the same
{
	if (numerator == num.numerator && denominator == num.denominator) // compares the fraction of first input to fraction of second input
		return true;
	else
		return false;
}

Rational Rational::add(Rational rat1) // this is a function of type Rational that has access to the class Rational which
// takes in a number from the class rational and adds them
{
	int commonDenom = denominator * rat1.denominator; // finds the common denominator by multiplying the two denominators
	int numer = (numerator * rat1.denominator) + (rat1.numerator * denominator); // sets the numerator by cross multiplying 
	// (numerator of first fraction by denominator of the second fraction and vice versa)
	Rational newRational; // we are creating a new number of type Rational
	newRational.setNumerator(numer); // we put the new numerator into the function setNumerator so that the numerator is now the new numerator
	newRational.setDenominator(commonDenom); // we do the same thing with the new denominator
	newRational.reduction(); // now we call the reduction function so that we can reduce the answer
	
	return newRational;
}
void Rational::reduction() // reduces the final answer
{
	int bigger; 
	int lcm = 1; // lowest common multiple must be at least 1
	if (numerator == 0) // if the numerator is 0
	{
		denominator = 1; // then the denominator is 1
		return; // return and that is the answer (0/1 = 0)
	}
	
	if (denominator > numerator) // checks which number in the fraction is bigger and calls thta number "bigger"
		bigger = denominator;
	else 
		bigger = numerator;
	
	for (int i = 2; i <= bigger; i++) // run a for loop so that we can get the least common denominator so that we can reduce
	{
		if (denominator % i == 0 && numerator % i == 0) // if the numerator and denominator are both divisable by the same number
			lcm = i; // then that is the lcd and we can proceed
	}
	denominator /= lcm; // now that we found the lcm we divide both the numerator and denominator by it
	numerator /= lcm;
}
