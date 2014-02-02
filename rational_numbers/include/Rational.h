#pragma once
#include <iostream>

using namespace std;
class Rational {
private:
	int m; //числитель
	int n; //знаменатель
	void save (int, int);
	int del (int, int);
public:
	Rational();
	Rational (int, int);
	~Rational();
	Rational mult (Rational, Rational);
	Rational mult (Rational, int);
	Rational divis (Rational, Rational);
	Rational sum (Rational, Rational);
	Rational sum (Rational, int);
	Rational diff (Rational, Rational);
	void print1 ();
    friend ostream& operator<< (ostream& out, Rational a) {
        out<<a.m<<"/"<<a.n;
        return out;
    }
    Rational operator*= (const Rational);
    Rational operator+= (const int);
    Rational operator+= (const Rational);
    friend bool operator> (Rational&, Rational&);
    friend bool operator< (Rational&, Rational&);
    friend bool operator== (Rational&, Rational&);
	void print2 ();
	int compare (Rational);
	int z (Rational);
};
