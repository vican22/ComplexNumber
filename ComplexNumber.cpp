#include "ComplexNumber.h"

#include<sstream>
using namespace std;

ComplexNumber::ComplexNumber(int realni, int imaginarni) {
	this->realni = realni;
	this->imaginarni = imaginarni;
}

void ComplexNumber::set_real(int realni) {
	this->realni = realni;
}

void ComplexNumber::set_imaginary(int imaginarni) {
	this->imaginarni = imaginarni;
}

ComplexNumber::ComplexNumber() {
	set_real(realni);
	set_imaginary(imaginarni);
}

ComplexNumber::ComplexNumber(ComplexNumber k1, ComplexNumber k2){
	
	realni = k1.realni + k2.realni;
	imaginarni = k1.imaginarni + k2.imaginarni;
}

string ComplexNumber::get() {
	stringstream ss;
	ss << realni << " + " << imaginarni << "i";
	return ss.str();
}
