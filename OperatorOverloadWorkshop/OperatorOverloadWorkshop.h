#pragma once
#include <iostream>

class A{
private:
	int _value;

public:
	void setValue();
	int getValue();
	int value;
	void print();
	A(int v) : value(v) {};
	A operator++(int);
	A operator+(const A& obj);
	A add(A, A);
};
