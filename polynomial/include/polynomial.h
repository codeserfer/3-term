#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
#include <vector>
using namespace std;

class polynomial {
    public:
        polynomial ();
        //polynomial(int, int*);
        polynomial(vector<int>);
        virtual ~polynomial();
        void print_polynomial ();
        friend const polynomial operator+(const polynomial&, const polynomial&);
        friend const polynomial operator-(const polynomial&, const polynomial&);
        friend const polynomial operator*( polynomial&,  polynomial&);
        friend const polynomial operator/( polynomial&,  polynomial&);
        polynomial& operator=(const polynomial&);
    protected:
    private:
    //int* factors; //массив коэфф-в
    vector<int> factors2;
    int number; //количество коэфф-в
};


#endif // POLYNOMIAL_H
