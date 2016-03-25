#pragma once
class SpecialCounter
{
private:
	int beg;		//stores starting value
	int end;		//stores stopping value
	int inc;		//stores increment value
	int dec;		//stores decrement value
	int currValue;	//stores current value of the counter

public:
	SpecialCounter();		//default constructor
	~SpecialCounter();      //default destructor
	SpecialCounter(int, int, int, int);	//default constructor with arguments
	void start();			//changes Starting value of the counter
	void stop();			//changes Stopping value of the counter
	void stepInc(int);		//changes Increment value of the counter
	void stepDec(int);		//changes Decrement value of the counter
	void operator++();		//countscounter Up by one Increment
	void operator--();		//counts counter Down by one Decrement
};
