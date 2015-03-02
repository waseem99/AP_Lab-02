#include "Matrix.h"

Matrix::Matrix(){

}

Matrix::Matrix(unsigned int r, unsigned int c){
	matrix = new float * [r];
	for(int i = 0; i < r; i++)
		matrix[i] = new float[c];
}

Matrix::~Matrix(){

	for( int i = 0 ; i < this->rows ; i++ )
	{
		delete[] matrix[i]; 
	}

	delete[] matrix;
}

void Matrix::Init_Matrix(float ** m, unsigned int r, unsigned int c){
	if(r==this->rows && c== this->cols){
		for (int i=0; i<r; i++){
			for (int j=0; j<c; j++){
				matrix[i][j] = m[i][j];
			}
		}
	}else{
		cout<<"The size of matrix and Initializer array doesn't match"<<endl;
	}
	
}

unsigned int Matrix::GetRows(){
	return this->rows;
}

unsigned int Matrix::GetCols(){
	return this->cols;
}



