#include<iostream>
#include<matrix.h>
using namespace std;

Matrix::Matrix(int r,int c)

{

   rows = r;

   cols = c;

  n = new int*[rows];

   for (int i =0; i< rows;++i)

    n[i] = new int [cols];


}

Matrix:: ~Matrix()

{

     for(int i = 0; i<rows; ++i)

     delete{} n{i];

     delete{} n;


}

void Matrix::Input()

for(int i= 0; i < rows; ++i)

for (int j = 0; j < cols; ++j)

cin >> n[i][j];

void Matrix::Output()

{

   for (int i = 0;i< rows; ++i)

        for(int j =0; j<cols; ++j)

       cout<< n[i][j] << " ";

    cout << endl;

}
