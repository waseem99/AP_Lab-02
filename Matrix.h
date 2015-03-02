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
	
	void Add_Matrix(float [][]a , float [][]b, unsigned int ra, unsigned int ca, unsigned int rb, unsigned int cb );
	void Subtract_Matrix(float [][]a , float [][]b, unsigned int ra, unsigned int ca, unsigned int rb, unsigned int cb );
	void Multiply_Matrix(float [][]a , float [][]b, unsigned int ra, unsigned int ca, unsigned int rb, unsigned int cb );
	void Display_Matrix(float [][]m, unsigned int r, unsigned int c);
	
private:
	float ** matrix;
	unsigned int rows;
	unsigned int cols;
};


