#include "../include/matrix.h"
#include <iostream>



matrix::matrix() {
	array=NULL;
	n=m=0;
}

matrix::matrix(int n, int m) {
	getMemory(n, m);
	fillMatrix();
}

matrix::~matrix(void) {
	if (array) {
		for (int i=0; i<n; i++) {
			delete [] array[i];
		}
		delete [] array;
		array=NULL;
	}
}

void matrix::getMemory(int n, int m) {

	this->n=n;
    this->m=m;
	this->array=new int*[n];
	for (int i=0; i<n; i++) {
		this->array[i]=new int[m];
	}
}

void matrix::fillMatrix() {
    std::cout << "Введите матрицу "<<n<<" на "<<m<<std::endl;
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			//std::cout << "array[" << i << "][" << j << "] = ";
			std::cin >> array[i][j];
			//std::cout << std::endl;
		}
	}
	return;
}

void matrix::show() {
	if (n==0 || m==0) {
		std::cout << "Матрица пуста\n\n";
		return;
	}
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			std::cout << array[i][j] << "\t";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	return;
}

matrix& matrix::operator=(const matrix& source) {
	if (&source==this) {
		return *this;
	}
	getMemory (source.n, source.m);
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			this->array[i][j]=source.array[i][j];
		}
	}
	return *this;
}

/* 1. Умножить матрицу на число (operator*). */
matrix& matrix::operator*(int num) {
	matrix* result = new matrix;
	if (!array) return *result;
	result->getMemory(this->n, this->m);
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			result->array[i][j]=this->array[i][j]*num;
		}
	}
	return *result;
}

/* 2. Умножить матрицу на матрицу (operator*). Если матрицы умножить нельзя, то вернуть исключение. */
matrix& operator*(const matrix& a, const matrix& b) {
	if (a.m != b.n) throw 1;
	int sum;
	matrix* result = new matrix;
	result->getMemory(a.n, b.m);
	for (int i=0; i<a.n; i++) {
		for(int j=0; j<b.m; j++) {
			sum=0;
			for (int count=0; count<a.m; count++) {
				sum += a.array[i][count] * b.array[count][j];
			}
			result->array[i][j]=sum;
		}
	}
	return *result;
}

/* 3. Сложить две матрицы (operator+). Если матрицы сложить нельзя, то вернуть исключение. */
matrix& operator+ (const matrix& a, const matrix& b) {
	if (a.n != b.n || a.m != b.m) throw 2;
	matrix* result = new matrix;
	result->getMemory(a.n, b.m);
	for (int i=0; i<a.n; i++) {
		for(int j=0; j<b.m; j++) {
			result->array[i][j]=a.array[i][j] + b.array[i][j];
		}
	}
	return *result;
}

/*matrix::matrix(int n, int m) {
    this->n=n;
    this->m=m;
    matr=new int* [n];
    for (int i=0; i<n; i++) matr[i]=new int [m];
    std::cout << "Enter matrix "<<n<<"x"<<m<<"\n";
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            std::cin >> matr [i][j];
        }
    }
}

matrix::matrix () {
    n=0;
    m=0;
    matr=NULL;
}

matrix::~matrix() {
    for (int i=0; i<n; i++) delete [] matr [i];
    matr=NULL;
}

void matrix::print () {
    std::cout << "Printing matrix:\n";
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            std::cout << matr [i][j]<<" ";
        }
        std::cout << std::endl;
    }
}

matrix operator+ (const matrix a, const matrix b) {
    matrix new_matrix;
    int** new_matr=new int* [a.n];
    for (int i=0; i<a.n; i++) new_matr[i]=new int [a.m];
    for (int i=0; i<a.n; i++){
        for (int j=0; j<a.gm; j++) {
            new_matr [i][j]=a.matr[i][j]+b.matr[i][j];
        }
    }
    new_matrix.matr=new_matr;
    new_matrix.n=a.n;
    new_matrix.m=a.m;
    return new_matrix;
}
matrix operator= (const matrix a) {



}
*/
