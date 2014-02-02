#include <iostream>
#include "include/matrix.h"


using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
	matrix m1(2, 2);
	matrix m2(2, 2);
    matrix m3;

	//m3 = m1*2;
	//m3.show();

	try {
		m3 = m1*m2;
		m3.show();
	} catch (int i) {
		cout << "Нельзя перемножить матрицы\n\n";
	}

	try {
		m3 = m1+m2;
		m3.show();
	} catch (int i) {
		cout << "Нельзя сложить матрицы\n\n";
	}

	try {
        m3=m1*5;
        m3.show ();

	} catch (int i) {
		cout << "Нельзя умножить матрицу на число\n\n";
	}

	//std::system("pause");
	return 0;
}

/*int main() {
    int m=0, n=0;
    std::cout << "Enter the number of rows ";
    std::cin >> n;
    std::cout << "Enter the number of colomns ";
    std::cin >> m;
    matrix a (n, m);
    a.print();

    std::cout << "Enter the number of rows ";
    std::cin >> n;
    std::cout << "Enter the number of colomns ";
    std::cin >> m;
    matrix b (n, m);
    b.print();
    matrix c=a+b;
    c.print();
    cout << "Hello world!" << endl;
    return 0;
}
*/
