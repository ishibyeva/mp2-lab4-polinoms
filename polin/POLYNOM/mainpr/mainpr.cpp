// mainpr.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include "List.h"
#include "vector"
using namespace std;
void main()
{
	int kol = 0, rezd;
	double rezc;

	cout << "Demonstration of arithmetic operations with polynomials" << endl<< "Input massive for deg and coefficient for first polinom" << endl;
	cout << "Choose number of poly 1"<<endl;
	cin >> kol;
	int* deg1 = new int[kol];
	double* coef1 = new double[kol];
	cout << "Enter coef for 1" << endl;
	for (int i = 0; i < kol; i++)
	{
		cin >> rezc;
		coef1[i]=rezc;
	}
	cout << "Enter deg for 1" << endl;
	for (int i = 0; i < kol; i++)
	{
		cin >> rezd;
		if (rezd < 100 || rezd>999)
		{
			cout << "Please, enter deg(x)deg(y)deg(z)";
			i--;
		}
		else
		deg1[i]=rezd;
	}
	Poly A(coef1 ,deg1, kol);
	delete[]coef1;
	delete[]deg1;
	cout << "Choose number of poly 2" << endl;
	cin >> kol;
	deg1 = new int[kol];
	coef1 = new double[kol];
	cout << "Enter coef for 2" << endl;
	for (int i = 0; i < kol; i++)
	{
		cin >> rezc;
		coef1[i] = rezc;
	}
	cout << "Enter deg for 2" << endl;
	for (int i = 0; i < kol; i++)
	{
		cin >> rezd;
		if (rezd < 100 || rezd>999)
		{
			cout << "Please, enter deg(x)deg(y)deg(z)";
			i--;
		}
		else
		deg1[i] = rezd;
	}
	Poly B(coef1, deg1, kol);
	Poly C;
	cout << "Choose a const" << endl;
	double cons_t;
	cin >> cons_t;
	cout << "Demonstration of functional" << endl;
	cout << "_______________________________________________________" << endl;
	cout << "\tA+B" << endl;
	C = A + B;
	cout << C<< endl;
	cout << "_______________________________________________________" << endl;
	cout << "\tA-B" << endl;
	C = A - B;
	cout << C << endl;
	cout << "_______________________________________________________" << endl;
	cout << "\tA*B" << endl;
	C = A * B;
	cout << C<< endl;
	cout << "_______________________________________________________" << endl;
	cout << "\tA*(const)" << endl;
	C = A * cons_t;
	cout << C<<endl;
	cout  << "_______________________________________________________" << endl;
}

