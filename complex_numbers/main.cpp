#include <iostream>
#include "include/complex.h"

using namespace std;

int main() {
    setlocale(LC_ALL,"Rus");
    complex a (5, 2);
    complex b (3, 5);
    complex c;
    /*cout << "Введите с ";
    cin >> c;*/
    cout << "Число a равно "<<a<<" число b равно "<<b<<" число c равно "<<c<<endl;
    c=a+b;
    cout << "Сумма a и b равна "<<c<<endl;
    c=a-b;
    cout << "Разность a и b равна "<<c<<endl;
    c=a/b;
    cout << "Частное a и b равно "<<c<<endl;
    c=a*b;
    cout << "Произведение a и b равно "<<c<<endl;
    a+=b;
    cout << "В результате a+=b значение а равно "<<a<<endl;
    cout << "a="<<a<<" b="<<b<<endl;

    b-=a;
    cout << "В результате b-=a значение а равно "<<b<<endl;
    cout << "a="<<a<<" b="<<b<<endl;

    b*=a;
    cout << "В результате b*=a значение а равно "<<b<<endl;
    cout << "a="<<a<<" b="<<b<<endl;

    b/=a;
    cout << "В результате b/=a значение а равно "<<b<<endl;
    cout << "a="<<a<<" b="<<b<<endl;

    complex q (4, 5);
    cout << "Число q="<<q<<endl;
    q++;
    cout << "Результат q++ :"<<q<<endl;
    q--;
    cout << "Результат q-- :"<<q<<endl;
    cout << "Результат сравнения a==a: "<<(a==a)<<endl;
    cout << "Результат сравнения a==b: "<<(a==b)<<endl;
    cout << "Результат сравнения a!=b: "<<(a!=b)<<endl;
    return 0;
}

/*int main() {
    complexlex a (2, 5);
    complexlex b (1.4, 9);
    cout << "a="<<a<<endl;
    cout << "b="<<b<<endl;
    complexlex r=a+b;
    cout << "a+b="<<r<<endl;
    r=a-b;
    cout << "a-b="<<r<<endl;
    r=a*b;
    cout << "a*b="<<r<<endl;
    r=a/b;
    cout << "a/b="<<r<<endl;
    cout << "a="<<a<<" b="<<b<<" a*=b=";
    a*=b;
    cout << a<<endl;
    b+=2;
    cout<<b<<endl;
    if (b) cout << "true";
    else cout << "false";
    cout << endl;
    complexlex z;
    if (z) cout << "true";
    else cout << "false";

    return 0;
}
*/
