#include <iostream>

using namespace std;

class Matrix
{
public:
	Matrix();
	Matrix( unsigned int r, unsigned int c);
	~Matrix();
	void Init_Matrix(float ** m, unsigned int r, unsigned int c);
	unsigned int GetRows();
	unsigned int GetCols();
	
	Matrix Add_Matrix(Matrix m );
	Matrix Subtract_Matrix(Matrix m );
	Matrix Multiply_Matrix(Matrix m );
	void Display_Matrix();
	
	float ** matrix;
	unsigned int rows;
	unsigned int cols;
	
private:

};


