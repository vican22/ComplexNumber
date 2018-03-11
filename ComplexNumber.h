#pragma once
#include<string>
using namespace std;

class ComplexNumber {
public:
	ComplexNumber(int realni, int imaginarni);
	void set_real(int realni);
	void set_imaginary(int imaginarni);
	ComplexNumber();
	ComplexNumber(ComplexNumber k, ComplexNumber k2);
	string get();

private:
	int realni;
	int imaginarni;
};
