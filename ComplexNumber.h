#pragma once

#include<iostream>
#include<string>
#include<sstream>
using namespace std;


class ComplexNumber
{
public:
	//konstruktor k1
	ComplexNumber(int r, int i);

	//konstruktor za k2
	ComplexNumber();

	void set_real(int r);
	void set_imaginary(int i);

	//konstruktor za rez
	ComplexNumber(ComplexNumber k1, ComplexNumber k2); 

	string get();

	
private:
	int realni;
	int imaginarni;
};

