/*PRAC-2:

OBJECTIVE:-TO IMPLEMENT THE CNCEPT OF MATRIX  MULTIPLICATION ALGORITHM

AIM:-WRITE A C++ PROGRAM TO MULTIPLY TWO MATRIX OF SIZE 3*3 AND STORE THE RESULT
 IN THIRD MATRIX DISCUSS IT'S COMPLEXITY*/

#include <iostream>
using namespace std;
int main()
{   
    cout << "\n HUMESH DESHMUKH \n ROLL NO. 37\n";
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    int matrixA[3][3], matrixB[3][3], resultMatrix[3][3];
    // Input for Matrix A
    cout << "Enter the elements of Matrix A:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrixA[i][j];
        }
    }
    // Input for Matrix B
    cout << "Enter the elements of Matrix B:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrixB[i][j];
        }
    }
    // Add the matrices
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            resultMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    // Display the result of addition
    cout << "Result of Matrix Addition:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << resultMatrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

/* THEORY:-

Matrix Multiplication Algorithm:

Matrix multiplication is a fundamental operation in linear algebra,
 where two matrices are multiplied to produce a third matrix.
  The resulting matrix's elements are computed by taking 
  the dot product of rows from the first matrix and columns from the second matrix.

Algorithm:

Consider two matrices A and B, where A has dimensions (m x n) and B has dimensions (n x p).
 The resulting matrix C, denoted as A * B, will have dimensions (m x p).
  The element C[i][j] is computed as the sum of the product of elements from the 
  ith row of matrix A and the jth column of matrix B.
  
Time Complexity:
The time complexity of the standard matrix multiplication algorithm is O(m * n * p),
 where m, n, and p are the dimensions of matrices A, B, and C, respectively.
 The dominant factor in the time complexity is the three nested loops,
  each ranging over the dimensions of the matrices.
  As a result, the time complexity grows cubic with the size of the matrices.

Efforts have been made to optimize matrix multiplication using more advanced algorithms,
 such as the Strassen algorithm, which has a slightly better time complexity. However, 
 the standard algorithm is often sufficient for small to moderately sized matrices. */