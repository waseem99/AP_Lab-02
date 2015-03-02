#include "Matrix.h"

Matrix::Matrix(){
	rows=0;
	cols=0;	
}

Matrix::Matrix(unsigned int r, unsigned int c){
	this->rows=r;
	this->cols=c;	
	matrix = new float * [r];
	for(unsigned int i = 0; i < r; i++)
		matrix[i] = new float[c];
}

Matrix::~Matrix(){

}

void Matrix::Init_Matrix(float ** m, unsigned int r, unsigned int c){

	if(r==this->rows && c== this->cols){
		for (unsigned int i=0; i<r; i++){
			for (unsigned int j=0; j<c; j++){
				this->matrix[i][j] = m[i][j];
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

Matrix Matrix::	Add_Matrix( Matrix m ){
	if(m.rows==this->rows && m.cols==this->cols){
		Matrix temp(m.rows, m.cols);
					cout<<"Initialized add"<<endl;
		for (unsigned int i = 0; i < m.rows;i++ )
			{
				for (unsigned int j = 0; j < m.cols; j++)
				{
					temp.matrix[i][j] = m.matrix[i][j] + this->matrix[i][j];
				}
			}
		return temp;
	}else{
		Matrix temp(0,0);
		//cout << "Error: Row-Column Size Mismatch of matrices! " << endl;
		return temp;
	}
}

Matrix Matrix::	Subtract_Matrix(Matrix m  ){

	if(m.rows==this->rows && m.cols==this->cols){
		Matrix temp(m.rows, m.cols);
		for (unsigned int i = 0; i < rows;i++ )
			{
				for (unsigned int j = 0; j < cols; j++)
				{
					temp.matrix[i][j] = m.matrix[i][j] - this->matrix[i][j];
				}
			}
		return temp;
	}else{
		Matrix temp(0,0);
		cout << "Error: Row-Column Size Mismatch of matrices! " << endl;
		return temp;
	}
	
}

Matrix Matrix::	Multiply_Matrix(Matrix m  ){
	if(m.rows==this->cols){
	Matrix temp(this->rows, m.cols);
	for (unsigned int i=0; i<this->rows; i++)
		for (unsigned int j=0; j<m.cols; j++){
			temp.matrix[i][j]=0;
		}
	for (unsigned int i = 0; i <this->rows ;i++ )
		{
			for (unsigned int j = 0; j<m.cols ; j++)
			{
				for (unsigned int k = 0; k<this->cols; k++)
				{
					temp.matrix[i][j] += this->matrix[i][k] * m.matrix[k][j];
					
				}
			}
		}
	return temp;
	}else{
		Matrix temp(0,0);
		cout << "Error: Row-Column Size Mismatch of matrices! " << endl;
		return temp;
	}
}

void Matrix::	Display_Matrix(){
	for (unsigned int i = 0; i < this->rows;i++ )
		{
			for (unsigned int j = 0; j < this->cols; j++)
			{
				cout << this->matrix[i][j] <<"\t"<< endl;
			}
			//cout<< endl;
		}
}

