#include "complex.hpp"
#include <iostream>

using namespace std;

complex::complex()
{
}

double complex::r(){
	return real;
}

double complex::i(){
	return imaginary;
}
complex::complex(double a, double b)
{
	real = a;
	imaginary = b;
}

void complex::set()
{
	cout << "Действительная часть КЧ: ";
	cin >> real;
	cout << "Мнимая часть КЧ: ";
	cin >> imaginary;
	cout << endl;
}

complex::complex(const complex& copy)
{
	real = copy.real;
	imaginary = copy.imaginary;
}

complex complex::operator*(complex &copy) {
	complex rez;
	rez.real = real * copy.real;
	rez.imaginary = imaginary * copy.imaginary;
	return rez;
}

complex complex::operator/(complex &copy){
	complex rez;
	rez.real = real / copy.real;
	rez.imaginary = imaginary / copy.imaginary;
	return rez;
}

bool complex::operator==(complex &copy){
	complex rez;
	if (real == copy.real && imaginary == copy.imaginary){
		cout << "complex_1 == complex_2";
		return true;
	}
	return false;
}

complex complex::operator=(complex &copy){
	real = copy.real;
	imaginary = copy.imaginary;
	return *this;
}


complex complex::sum(complex a) const
{
	return complex(real + a.real, imaginary + a.imaginary);
}

void complex::print(std::ostream&stream) const
{
	if (imaginary > 0)
	{
		stream << real << " + " << imaginary << "i" << endl;
	}
	else
	{
		if (imaginary == 0)
			stream << real << endl;
		else
			stream << real << " " << imaginary << "i" << endl;
	}
}

complex complex::sub(complex a) const
{
	return complex(real - a.real, imaginary - a.imaginary);
}

complex complex::operator+=(complex &copy){
	real += copy.real;
	imaginary += copy.imaginary;
	return *this;
}

complex complex::operator-=(complex &copy){
	real -= copy.real;
	imaginary -= copy.imaginary;
	return *this;
}

complex complex::operator*=(complex &copy){
	real *= copy.real;
	imaginary *= copy.imaginary;
	return *this;
}

complex complex::operator/=(complex &copy){
	real /= copy.real;
	imaginary /= copy.imaginary;
	return *this;
}

complex complex::mult(int a) const
{
	return complex(real*a, imaginary*a);
}

complex complex::div(int a) const
{
	return complex(real / a, imaginary / a);
}
