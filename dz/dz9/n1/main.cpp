#include <iostream>
#include <fstream>
#include <stdio.h>

    struct Matrix{
        int n;
        int m;
        int number;
        double** elements;
        Matrix() : Matrix(1, 1) { elements = nullptr; }
        //конструктор преобразования
        Matrix(int rows, int columns) : n(rows), m(columns), elements(new double*[n]){
            for (int i = 0; i < n; ++i){
                elements[i] = new double [m];
            }
        }
        ~Matrix(){
            for (int i = 0; i < n * m; ++i)
            delete[] elements;
        }
        double*  operator[] (int n);

        Matrix operator+ (const Matrix& matrix);

        Matrix operator- (const Matrix& matrix);

        Matrix operator+= (const Matrix& matrix);

        Matrix operator-= (const Matrix& matrix);

        bool operator== (const Matrix& matrix);


        Matrix operator* (const Matrix& matrix);

        friend std::istream& operator >> (std::istream& is, Matrix& m);

        friend std::ostream& operator << (std::ostream& os, Matrix& m);

        void transpose();

        void GetMatr(double *elements, double*elements1, int i, int j, int m);

        double detmat(double **mas, int m);
    };


    //перегрузка оператора [][]


    double* Matrix::operator[] (int matel1)
    {
        if(matel1 < 0 || matel1 > n){
            std::cerr << "неправильный индекс" << matel1;
            exit;
        }
        return elements[matel1];
    };
     //перегрузка оператора +
     Matrix Matrix::operator+ (const Matrix& mat){
         if (n != mat.n || m != mat.m){
             std::cerr << "матрицы не совпадают";
             return reinterpret_cast<const Matrix &>(elements);
         }
         Matrix A(n, m);
         for (int i =0; i < n; ++i){
             for (int j = 0; j < m; ++j){
                 A.elements[i][j] = this->elements[i][j] + mat.elements[i][j];
             }
         }
         return A;
     };
//перегрузка оператора -
Matrix Matrix::operator- (const Matrix& mat){
    if (n != mat.n || m != mat.m){
        std::cerr << "матрицы не совпадают";
        return reinterpret_cast<const Matrix &>(elements);
    }
    Matrix A(n, m);
    for (int i =0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            A.elements[i][j] = elements[i][j] - mat.elements[i][j];
        }
    }
    return A;
};
Matrix Matrix::operator+= (const Matrix& mat){
    if (n != mat.n || m != mat.m){
        std::cerr << "матрицы не совпадают";
        return reinterpret_cast<const Matrix &>(elements);
    }
    Matrix A(n, m);
    for (int i =0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            A.elements[i][j] = elements[i][j] + mat.elements[i][j];
        }
    }
    return A;
};

Matrix Matrix::operator-= (const Matrix& mat){
    if (n != mat.n || m != mat.m){
        std::cerr << "матрицы не совпадают";
        return reinterpret_cast<const Matrix &>(elements);
    }
    Matrix A(n, m);
    for (int i =0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            A.elements[i][j] = elements[i][j] - mat.elements[i][j];
        }
    }
    return A;
};
bool Matrix::operator== (const Matrix& mat) {
    bool b = false;
    if (n != mat.n || m != mat.m) {
        std::cerr << "матрицы не совпадают";
        return b;
    }
    Matrix A(n, m);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (elements[i][j] != mat.elements[i][j]) {
                return b;
            }
        }
    }
    return true;
};

Matrix Matrix::operator* (const Matrix& mat){
    int n;
    if (n != mat.n || m != mat.m){
        std::cerr << "матрицы не совпадают";
        return reinterpret_cast<const Matrix &>(elements);
    }
    Matrix A(n, m);
    for (int i =0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            A.elements[i][j] = elements[i][j] * n;
        }
    }
    return A;
};

void Matrix::transpose(){
    double *B = new double[m*n];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            B[j * n + i] = *elements[i * m + j];
        }
    }
    for(int i = 0; i < n * m; ++i){
        elements[i] = &B[i];
    }
    delete [] B;
}

double Matrix::detmat(double **mas, int m) {
    int i, j, d, k, n;
    double **p;
    p = new double*[m];
    for (i = 0; i<m; i++)
        p[i] = new double[m];
    j = 0; d = 0;
    k = 1;
    n = m - 1;
    if (m<1){
        std::cerr << "некорректная матрица";
    }
    if (m == 1) {
        d = mas[0][0];
        return(d);
    }
    if (m == 2) {
        d = mas[0][0] * mas[1][1] - (mas[1][0] * mas[0][1]);
        return(d);
    }
    if (m>2) {
        for (i = 0; i<m; i++) {
            GetMatr(mas, p, i, 0, m);
            d = d + k * mas[i][0] * detmat(p, n);
            k = -k;
        }
    }
    return(d);
};


void GetMatr(int **mas, int **p, int i, int j, int m) {
    int ki, kj, di, dj;
    di = 0;
    for (ki = 0; ki<m - 1; ki++) {
        if (ki == i) di = 1;
        dj = 0;
        for (kj = 0; kj<m - 1; kj++) {
            if (kj == j) dj = 1;
            p[ki][kj] = mas[ki + di][kj + dj];
        }
    }
}
int main() {
    return 0;
}
