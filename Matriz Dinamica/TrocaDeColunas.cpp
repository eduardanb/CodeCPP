#include <iostream>
using namespace std;

int** CriarMatriz(int lin, int col){
    int **mat;
    mat = new int*[lin];
    for(int i=0; i<lin; i++){
        mat[i] = new int[col];
    }
    return mat;
}

void LerMatriz(int **mat, int lin, int col){
    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            cout << "(" << i+1 << ", " << j+1 << "): ";
            cin >> mat[i][j];
        }
    }
}

void ImprimirMatriz(int **mat, int lin, int col){
    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void TrocarColunas(int **mat, int lin, int col, int coluna1, int coluna2){
    int aux;
    for(int i=0; i<lin; i++){
        aux = mat[i][coluna1];
        mat[i][coluna1] = mat[i][coluna2];
        mat[i][coluna2] = aux;
    }
}

int main(){
    int lin, col;
    cout << "Quatidade de Linhas: ";
    cin >> lin;
    cout << "Quantidade de Colunas: ";
    cin >> col;    

    int **mat = CriarMatriz(lin, col);
    LerMatriz(mat, lin, col);
    ImprimirMatriz(mat, lin, col);
    cout << "--------------" << endl;

    int coluna1, coluna2;
    cout << "Indice da primeira coluna a ser trocada: ";
    cin >> coluna1;
    cout << "Indice da segunda coluna a ser trocada: ";
    cin >> coluna2;

    cout << "--------------" << endl;
    TrocarColunas(mat, lin, col, coluna1, coluna2);
    ImprimirMatriz(mat, lin, col);

    return 0;
}