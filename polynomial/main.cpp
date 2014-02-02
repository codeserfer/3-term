#include <iostream>
#include "include/polynomial.h"
#include <vector>

using namespace std;

vector<int> make (int n) {
    vector<int> temp (n);
    cout << "Input polynomial ("<<n<<"):\n";
    for (int i=n-1; i>=0; i--) cin >> temp[i];
    return temp;
}

int main() {
    setlocale(LC_ALL,"Russian");
    vector<int> am=make (5);
    polynomial a (am);
    std::cout << "polynomial a is ";
    a.print_polynomial();
    std::cout << std::endl;


    vector<int> bm=make (3);
    polynomial b (bm);
    std::cout << "polynomial b is ";
    b.print_polynomial();
    std::cout << std::endl;

    polynomial c=a+b;
    polynomial d=a-b;
    std::cout << "sum of a and b is ";
    c.print_polynomial();
    std::cout << std::endl;
    std::cout << "diff of a and b is ";
    d.print_polynomial();
    std::cout << std::endl;

    polynomial e=a*b;
    std::cout << "mult of a and b is ";
    e.print_polynomial();
    std::cout << std::endl;

    e=b/a;
    return 0;
}
