#include "../include/complex.h"

complex::complex () {
    this->x=0;
    this->y=0;
}
const complex& complex::operator+= (complex a) {
    x+=a.x;
    y+=a.y;
    return *this;
}
complex operator+ (complex a, complex b) {
    complex temp=a;
    //a+=b;
    temp+=b;
    return temp;
}
const complex& complex::operator-= (complex a) {
    x-=a.x;
    y-=a.y;
    return *this;
}
complex operator-(complex a,complex b) {
    a-=b;
    return a;
}
const complex& complex::operator*=(complex a) {
    x=x*a.x-y*a.y;
    y=y*a.x+x*a.y;
    return *this;
}
complex operator*(complex a,complex b) {
    a*=b;
    return a;
}
const complex complex::operator/=(complex a) {
    x=(x*a.x+y*a.y)/(a.x*a.x+a.y*a.y);
    y=(y*a.x-x*a.y)/(a.x*a.x+a.y*a.y);
    return *this;
}
complex operator/(complex a,complex b) {
    a/=b;
    return a;
}
bool operator==(complex a,complex b) {
    return a.x==b.x&&a.y==b.y;
}
bool operator!=(complex a,complex b) {
    return !(a.x==b.x&&a.y==b.y);
}
complex& complex::operator=(complex a) {
    x=a.x;
    y=a.y;
    return *this;
}
ostream& operator<<(ostream& out,complex a) {
    if (a.y==0) { out<<a.x; return out; }
    if (a.y>0) out<<a.x<<"+"<<a.y<<"i";
    else out<<a.x<<a.y<<"i";
    return out;
}
 istream& operator>>(istream& in, complex& a) {
    in >> a.x;
    in >> a.y;
    return in;
}
complex complex::operator++() {
    x++;
    return *this;
}
complex complex::operator++(int p) {
    complex val=*this;
    x++;
    return val;
}
complex complex::operator--() {
    x--;
    return *this;
}
complex complex::operator--(int p) {
    complex val = *this;
    x--;
    return val;
}
complex complex::operator+() {
    return *this;
}
complex complex::operator-() {
    return complex(-x, y);
}
complex::complex(float a,float b){
    x=a;
    y=b;
}

/*complex::complex (double real, double img) {
    this->real=real;
    this->img=img;
}

complex::complex (double real) {
    this->real=real;
    this->img=0;
}

complex::complex () {
    this->real=0;
    this->img=0;
}

complex::complex(const complex& q) {
    this->real=q.real;
    this->img=q.img;
}
complex::~complex() {

}


complex operator+ (const complex &a, const complex &b) {
    complex temp (a.real+b.real, a.img+b.img);
    return temp;
}

complex operator- (const complex &a, const complex &b) {
    complex temp (a.real-b.real, a.img-b.img);
    return temp;
}

complex operator* (const complex &a, const complex &b) {
    complex temp (a.real*b.real-a.img*b.img, a.real*b.img+b.real*a.img);
    return temp;
}

complex operator/ (const complex &a, const complex &b) {
    complex temp ((a.real*b.real+a.img*b.img)/(b.real*b.real+b.img*b.img), (b.real*a.img-b.img*a.real)/(b.real*b.real+b.img*b.img));
    return temp;
}


complex complex::operator= (const complex& source){
    if (&source==this) {
		return *this;
	}
    this->real=source.real;
    this->img=img;
    return *this;
}

complex complex::operator+= (const complex& a) {
    this->real+=a.real;
    return *this;
}

complex complex::operator-= (const complex& a) {
    this->real-=a.real;
    return *this;
}

complex complex::operator*= (const complex& a) {
    complex temp=*this;
    //cout << "operator+=: this="<<*this<<" a="<<a<<endl;
    complex rez=temp*a;
    //cout << "rez="<<rez<<endl;
    return rez;
}
*/
