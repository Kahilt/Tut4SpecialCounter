#include "SpecialCounter.h"
#include <iostream>

using namespace std;

SpecialCounter::SpecialCounter() :beg(0), end(255), inc(1), dec(1)
{
	currValue = beg;
}


SpecialCounter::SpecialCounter(int st, int en, int incr, int decr)
{
	beg= st;
	end = en;
	inc = incr;
	dec = decr;
	currValue = beg;
}

SpecialCounter::~SpecialCounter()
{

}

void SpecialCounter::start()
{
	cout << "Enter number to Begin : ";
	cin >> beg;				                      //stores user defined value into beg variable
	currValue = beg;		                     	//sets the Current Value of the counter to the Start value
}


void SpecialCounter::stop()
{
	cout << "Enter number to Stop : ";
	cin >> end;					//stores value from user into end variable
}

void SpecialCounter::stepInc(int stepSize)	//changes the Increment of the counter
{
	inc = stepSize;
}

void SpecialCounter::stepDec(int stepSize)	//changes the Decrement of the counter
{
	dec = stepSize;
}

void SpecialCounter::operator--()					//counts the counter down by one Decrement
{
	currValue = currValue - dec;
	cout << endl << "The current value is : " << currValue << endl;		//prints the current value
}

void SpecialCounter::operator++()					//counts the counter Up by one Increment
{
	if ((currValue + inc) > end) //ensures that if the counter has reached the stopping value, it will not count up
	{			
		cout << "Counter has reached end value." << endl;
	}
	else
	{
		currValue = currValue + inc;
		cout << endl << "The current value is : " << currValue << endl;	//prints the current value
	}
}

