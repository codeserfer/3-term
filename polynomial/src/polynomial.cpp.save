#include <iostream>
#include "../include/polynomial.h"
#include <cmath>

/*polynomial::polynomial(int number, int* factors) {
    this->number=number;
    this->factors=new int [number];
    for (int i=0; i<number; i++) this->factors[i]=factors[i];
}*/

polynomial::polynomial (vector<int> v) {
    this->factors2=v;
    this->number=v.size ();
}

polynomial::polynomial () {
   this->number=0;
}

polynomial::~polynomial() {
    this->number=0;
}

void polynomial::print_polynomial() {
    if (number==0) {std::cout << "Polynomial is empty\n"; return; }
    if (number==1) {std::cout << factors2[0]<<"*x"; return; }
    int i=number-1;
    if (factors2[i]!=0 && factors2[i]!=1 && factors2[i]!=-1) std::cout << factors2[i]<<"*x^"<<i;
    if (factors2[i]==1) std::cout <<"x^"<<i;
    if (factors2[i]==-1) std::cout <<" - x^"<<i;
    i--;
    for (; i>=0; i--) {
        if (factors2[i]==0) continue;
        if (i==1) {
            if (factors2[i]>0 && factors2[i]!=1) { std::cout << " +"<<factors2[i]<<"*x"; continue; }
            if (factors2[i]==1) { std::cout << " + x"; continue; }
            if (factors2[i]==-1) { std::cout << " - x"; continue; }
            std::cout <<factors2[i]<<"*x";
            continue;
        }

        if (i==0) {
            if (factors2[i]==0) continue;
            if (factors2[i]>0) std::cout << " + "<<factors2[i];
            else std::cout << factors2[i];
            continue;
        }
        if (factors2[i]>0 && i!=1 && i!=0) {
            if (factors2[i]!=1) std::cout << " + "<<factors2[i]<<"*x^"<<i;
            else std::cout << " + x^"<<i;
        }
        else {
            if (factors2[i]!=-1) std::cout <<factors2[i]<<"*x^"<<i;
            else std::cout <<" - x^"<<i;
        }
    }
}

const polynomial operator+(const polynomial& a, const polynomial& b) {
    int max_size_p=0, min_p_size=0;
    if (a.number>b.number) { max_size_p=a.number; min_p_size=b.number; }
    else { max_size_p=b.number; min_p_size=a.number; }
    vector<int>q (max_size_p);
    //cout << "min_number="<<min_p_size<<" max_number="<<max_size_p<<endl;
    for (int i=0; i<min_p_size; i++) {
       q[i]=a.factors2[i]+b.factors2[i];
    }
    for (int i=min_p_size; i<max_size_p; i++) {
       if (a.number>min_p_size) q[i]=a.factors2[i];
       else q[i]=b.factors2[i];
    }
    return polynomial (q);
}

const polynomial operator-(const polynomial& a, const polynomial& b) {
   //int* q=new int [b.number];
   vector<int>q (b.number);
   for (int i=0; i<b.number; i++) q[i]=b.factors2[i]*(-1);
   //polynomial temp (b.number, q);
   polynomial temp (q);
   return polynomial (a+temp);
}

const polynomial operator*( polynomial& a,  polynomial& b) {
    vector <int> rezult (a.number+b.number-1);
    for (int i=0; i<a.number; i++) {
        for (int j=0; j<b.number; j++) {
            rezult [i+j]+=(a.factors2[i]*b.factors2[j]);
            //cout << "rezult["<<i+j<<"]+="<<a.factors2[i]*b.factors2[j]<<endl;
        }
   }
   //for (int i=0; i<rezult.size(); i++) cout << rezult[i]<< " ";
   return polynomial (rezult);
}

const polynomial operator/( polynomial& a,  polynomial& b) {
    if (b.number>a.number) {cout << "Делимое больше делителя!\n"; vector<int> t; return (polynomial(t));}
    //for (int i=a.number; i>b.number; i--)
}

polynomial& polynomial::operator=(const polynomial& a) {
   //проверка на самоприсваивание
   if (this == &a) {
      return *this;
   }
   this->factors2=a.factors2;
   this->number=a.number;
   return *this;
}


