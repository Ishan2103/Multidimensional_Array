#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;

    cout << "Enter r and c of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter r and c of second matrix: ";
    cin >> r2 >> c2;
    if (r1 != c2 || c1 != r2) {
        cout << "Matrix multiplication not possible. Dimensions are wrong" << endl;
        return 0;
    }

    int a[10][10], b[10][10], mult[10][10];
    cout << "Enter inputs of first matrix:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> a[i][j];
        }
    }
    cout << "Enter inputs of second matrix:" << endl;
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> b[i][j];
        }
    }
    cout << "Sum of the matrices:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            mult[i][j] = a[i][j] * b[i][j];
            cout << mult[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
