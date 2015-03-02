#include "Matrix.h"

int main (){
	cout<<"Matrix Manipulation"<<endl;
	Matrix a(2,2);
	Matrix b(2,2);
	float temp[2][2];
	for (int i=0; i<2; i++)
		for (int j=0; j<2; j++){
			a.matrix[i][j]=i+j;
		}
	for (int i=0; i<2; i++)
		for (int j=0; j<2; j++){
			b.matrix[i][j]=i+j;
		}
	Matrix t(2,2);

	//a.Display_Matrix();
	//b.Display_Matrix();

	t=a.Multiply_Matrix(b);
	t.Display_Matrix();
	return 0;
}
