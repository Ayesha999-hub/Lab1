#include<iostream>
using namespace std;

void inputMatrix(int A[][35], int m, int n) {
    cout << "Enter the elements of the matrix";
    for (int i = 0; i<m; i++) {
        for (int j = 0; j < n; ++j) {
            cin >> A[i][j];
        }
    }
}

void display(int A[][35], int m, int n) {
    cout << "Matrix elements";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << A[i][j];
        }
       
    }
}

int sumMatrix(int A[][35], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            sum += A[i][j];
        }
    }
    return sum;
}

void row_wiseSum(int A[][35], int m, int n) {
    cout << "Row-wise sum:\n";
    for (int i = 0; i < m; ++i) {
        int sum = 0;
        for (int j = 0; j < n; ++j) {
            sum += A[i][j];
        }
        cout << "Sum of row " << i << ": " << sum << std::endl;
    }
}

void columnwiseSum(int A[][35], int m, int n) {
    cout << "Column-wise sum:";
    for (int j = 0; j < n; ++j) {
        int sum = 0;
        for (int i = 0; i < m; ++i) {
            sum += A[i][j];
        }
        cout << "Sum of column " << j << ": " << sum << std::endl;
    }
}

void transpose(int A[][35], int m, int n) {
    int trans[35][35];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            trans[i][j] = A[j][i];
        }
    }

    cout << "Transpose of the matrix:\n";
    display(trans, n, m);
}

int main() {
    int m, n;
    cout << "Enter the number of rows (m): ";
    cin >> m;
    cout << "Enter the number of columns (n): ";
    cin >> n;

    int Array[35][35];

    int choice;
    do {
        cout << "nMenu";
        cout << "1. Input elements into matrix\n";
        cout << "2. Display elements of matrix\n";
        cout << "3. Sum of all elements of matrix\n";
        cout << "4. Display row-wise sum of matrix\n";
        cout << "5. Display column-wise sum of matrix\n";
        cout << "6. Create transpose of matrix\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            inputMatrix(Array, m, n);
            break;
        case 2:
            display(Array,m,n);
            break;
        case 3:
            cout << "Sum of all elements: " << sumMatrix(Array, m, n) << std::endl;
            break;
        case 4:
            row_wiseSum(Array, m, n);
            break;
        case 5:
            columnwiseSum(Array, m, n);
            break;
        case 6:
            transpose(Array, m, n);
            break;
        case 7:
            cout << "Exiting the program";
            break;
        default:
            cout << "Invalid choice";
        }
    } while (choice != 7);

    return 0;
}
