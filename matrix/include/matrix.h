#ifndef MATRIX_H
#define MATRIX_H
class matrix {
	int** array;
	int n, m;
public:
	matrix(void);
	matrix(int N, int M);
	~matrix(void);
	void show();
	void fillMatrix();
	void getMemory(int, int);
	matrix& operator*(const int num);
	friend matrix& operator*(const matrix& A, const matrix& B);
	friend matrix& operator+(const matrix& A, const matrix& B);
	matrix& operator=(const matrix&);
};

#endif // MATRIX_H

/*class matrix
{
    public:
        matrix(int, int);
        matrix ();
        ~matrix();
        void print ();
        friend matrix operator+ (const matrix, const matrix);
        matrix operator= (const matrix);
    protected:
    private:
        int** matr;
        int m, n;
};


*/
