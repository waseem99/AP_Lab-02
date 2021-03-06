#include <limits.h>
#include "Matrix.h"
#include "gtest/gtest.h"

TEST(MtrixTest1, Add) {
  	Matrix a(2,2);
	Matrix b(2,2);
	for (int i=0; i<2; i++)
		for (int j=0; j<2; j++){
			a.matrix[i][j]=i+j;
		}
	for (int i=0; i<2; i++)
		for (int j=0; j<2; j++){
			b.matrix[i][j]=i+j;
		}
	Matrix t(2,2);
	t=a.Add_Matrix(b);
	for (int i=0; i<2; i++)
		for (int j=0; j<2; j++){
			EXPECT_EQ( t.matrix[i][j], (i+j)+(i+j));
		}
}

TEST(MtrixTest2, Multiply) {
  	Matrix a(2,2);
	Matrix b(2,2);
	for (int i=0; i<2; i++)
		for (int j=0; j<2; j++){
			a.matrix[i][j]=i+j;
		}
	for (int i=0; i<2; i++)
		for (int j=0; j<2; j++){
			b.matrix[i][j]=i+j;
		}
	Matrix t(2,2);
	t=a.Multiply_Matrix(b);
	EXPECT_EQ( t.matrix[0][0], 1);
	EXPECT_EQ( t.matrix[0][1], 2);
	EXPECT_EQ( t.matrix[1][0], 2);
	EXPECT_EQ( t.matrix[1][1], 5);
}

TEST(MtrixTest3, Multiply_Add) {
  	Matrix a(2,2);
	Matrix b(2,2);
	for (int i=0; i<2; i++)
		for (int j=0; j<2; j++){
			a.matrix[i][j]=i+j;
		}
	for (int i=0; i<2; i++)
		for (int j=0; j<2; j++){
			b.matrix[i][j]=i+j;
		}
	Matrix t(2,2);
	t=a.Multiply_Matrix(b);
	t=t.Add_Matrix(a);
	EXPECT_EQ( t.matrix[0][0], 1);
	EXPECT_EQ( t.matrix[0][1], 3);
	EXPECT_EQ( t.matrix[1][0], 3);
	EXPECT_EQ( t.matrix[1][1], 7);
}

