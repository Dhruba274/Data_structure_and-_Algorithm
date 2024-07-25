#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int r, c, i, j, no_of_zeros= 0;
    cout << "Enter the number of row m:";
    cin >> r;
    cout << "Enter the number of column n:";
    cin >> c;
    int matrix[r][c];
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cout << "Enter the element for row:" << i << " column " << j + 1 << ":";
            cin >> matrix[i][j];
            if (matrix[i][j] == 0)
                no_of_zeros++;
        }
    }
    cout << "Your Matrix:" << endl;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    if (no_of_zeros > ((r * c) / 2)) {
        cout << "Sparse Matrix" << endl;

        cout << "Row\tColumn\tValue" << endl;

        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                if (matrix[i][j] != 0) {
                    cout << i + 1 << "\t" << j + 1 << "\t" << matrix[i][j] << endl;
                }
            }
        }
    } else {
        cout << "Not a Sparse Matrix" << endl;
    }

    return 0;
}