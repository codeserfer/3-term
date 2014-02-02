#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;


class complex {
        float x;
        float y;
public:
        const complex& operator+=(complex);
        friend complex operator+(complex, complex);
        const complex& operator-=(complex);
        friend complex operator-(complex,complex);
        const complex& operator*=(complex);
        friend complex operator*(complex,complex);
        const complex operator/=(complex);
        friend complex operator/(complex,complex);
        friend bool operator==(complex,complex);
        friend bool operator!=(complex,complex);
        complex& operator=(complex);
        friend ostream& operator<<(ostream&,complex);
        friend istream& operator>>(istream&, complex&);
        complex operator++();
        complex operator++(int);
        complex operator--();
        complex operator--(int);
        complex operator+();
        complex operator-();
        complex(float a,float b);
        complex ();


};
#endif // COMPLEX_H

/*class complex {
    public:
        complex (double, double);
        complex (double);
        complex ();
        complex (const complex&);
        ~complex ();
        friend complex operator+ (const complex&, const complex&);
        friend complex operator- (const complex&, const complex&);
        friend complex operator* (const complex&, const complex&);
        friend complex operator/ (const complex&, const complex&);
        complex operator+= (const complex&);
        complex operator-= (const complex&);
        complex operator*= (const complex&);
        complex operator/= (const complex&);
        complex operator= (const complex&);
        friend const complex operator+ (const complex& a) {return a;}
        friend const complex operator- (const complex& a) {return -a;} //?
        friend const complex operator++ (complex& a) {a.real++; return a;}
        friend const complex operator-- (complex& a) {a.real--; return a;}
        friend const complex operator++ (complex& a, int) {complex old (a.real, a.img); a.real++; return old;}
        friend const complex operator-- (complex& a, int) {complex old (a.real, a.img); a.real--; return old;}
        friend bool operator== (const complex a, const complex b) {if (a.real==b.real && a.img==b.img) return true; else return false;}
        friend bool operator!= (const complex a, const complex b) {if (a.real==b.real && a.img==b.img) return false; else return true;}
        operator bool () const {return this->img&&this->real;}
        friend ostream& operator<< (ostream& out, complex a) {
            if (a.img==) {} : out<<a.real; return out;
            if (a.img>0) out<<a.real<<"+"<<a.img<<"i";
            else out<<a.real<<a.img<<"i";
            return out;
        }
    protected:
    private:
    double real, img;
};

#endif // COMPLEX_H
*/
