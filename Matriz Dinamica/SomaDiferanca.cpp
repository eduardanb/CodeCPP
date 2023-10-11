#include <iostream>
using namespace std;

int** CriarMatriz(int l, int c){
    int **mat;
    mat = new int*[l];
    for(int i=0; i<l; i++){
        mat[i] = new int[c];
    }
    return mat;
}

void LerMatriz(int **mat, int l, int c){
    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            cout << "[" << i+1 << ", " << j+1 << "]: ";
            cin >> mat[i][j];
        }
    }
}

void ImprimirMatriz(int **mat, int l, int c){
    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void SomarMatriz(int **mat1, int **mat2, int **mat3, int l, int c){
    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void SubtrairMatriz(int **mat1, int **mat2, int **mat3, int l, int c){
    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            mat3[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

int main(){
    int l, c;
    cout << "Linhas: ";
    cin >> l;
    cout << "Colunas: ";
    cin >> c;

    int **mat1 = CriarMatriz(l, c);
    int **mat2 = CriarMatriz(l, c);
    int **mat3 = CriarMatriz(l, c);

    cout << "Matriz 1: " << endl;
    LerMatriz(mat1, l, c);
    cout << "Matriz 2: " << endl;
    LerMatriz(mat2, l, c);

    SomarMatriz(mat1, mat2, mat3, l, c);
    cout << "Soma das Matrizes: " << endl;
    ImprimirMatriz(mat3, l, c);

    SubtrairMatriz(mat1, mat2, mat3, l, c);
    cout << "Subtracao das Matrizes: " << endl;
    ImprimirMatriz(mat3, l, c);

    return 0;
}