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

void TrocarColunas(int **mat, int lin, int col, int linha1, int linha2){
    int aux;
    for(int j=0; j<col; j++){
        aux = mat[linha1][j];
        mat[linha1][j] = mat[linha2][j];
        mat[linha2][j] = aux;
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

    int linha1, linha2;
    cout << "Indice da primeira linha a ser trocada: ";
    cin >> linha1;
    cout << "Indice da segunda linha a ser trocada: ";
    cin >> linha2;

    cout << "--------------" << endl;
    TrocarColunas(mat, lin, col, linha1, linha2);
    ImprimirMatriz(mat, lin, col);

    return 0;
}