#include "ComplexNumber.h"

//konstruktor k1
ComplexNumber::ComplexNumber(int r, int i) {
	realni = r;
	imaginarni = i;
}

//konstruktor k2
ComplexNumber::ComplexNumber() {
	set_real(realni);
	set_imaginary(imaginarni);
}

//konstruktor rez
ComplexNumber::ComplexNumber(ComplexNumber k1, ComplexNumber k2) {
	
		realni = k1.realni + k2.realni;
		imaginarni = k1.imaginarni + k2.imaginarni;
}
void ComplexNumber::set_real(int r) {
	realni = r;
 }

void ComplexNumber::set_imaginary(int i) {
	imaginarni = i;
}

string ComplexNumber::get() {
	stringstream ss;
	ss << "z = " << realni << " + " << imaginarni << "i";
	return ss.str();
}