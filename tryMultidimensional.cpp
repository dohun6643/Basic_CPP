#include <iostream>
using namespace std;

int main() {
int row, column;
char char_row, char_column;
cout << "Enter Row and Column: "; cin >> row >> column;
cout << "Display Row and Column : "; cin >> char_row >> char_column;
char **ptr_matrix = new char*[row];
for (int i = 0; i < row; i++)
ptr_matrix[i] = new char[column];
cout << "Matrix Size : " << row*column << endl;
for (int i = 0; i < row; i++) // output each array element's value
for (int j = 0; j < column; j++) {
ptr_matrix[i][j] = char_row;
}
for (int i = 0; i < row; i++) // output each array element's value
for (int j = 0; j < column; j++) {
cout <<  ptr_matrix[i][j] ; 
}
cout << endl;
delete[] ptr_matrix;
return 0;
}
