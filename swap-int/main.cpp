#include <iostream>
using namespace std;

void swap1 (int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void swap2 (int& a, int& b) {
    int temp=a;
    a=b;
    b=temp;
}

void swap3 (int& a, int& b) {
    a=a+b;
    b=a-b;
    a=a-b;
}

void swap4 (int& a, int& b) {
    a^=b;
    b^=a;
    a^=b;
}

int main() {
    int a=0, b=0;
    cout << "Input a and b:\n";
    std::cin >> a;
    std::cin >> b;
    swap1 (&a,&b);
    std::cout<<"a="<<a<<" b="<<b<<endl;

    cout << "Input a and b:\n";
    std::cin >> a;
    std::cin >> b;
    swap2 (a, b);
    std::cout<<"a="<<a<<" b="<<b<<endl;

    cout << "Input a and b:\n";
    std::cin >> a;
    std::cin >> b;
    swap3 (a, b);
    std::cout<<"a="<<a<<" b="<<b<<endl;

    cout << "Input a and b:\n";
    std::cin >> a;
    std::cin >> b;
    swap4 (a, b);
    std::cout<<"a="<<a<<" b="<<b<<endl;
    return 0;
}
