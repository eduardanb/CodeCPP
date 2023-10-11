#include <iostream>
using namespace std;

int** CriarMatriz(int lin, int col){
    int **mat = new int*[lin];
    for(int i=0; i<lin; i++){
        mat[i] = new int[col];
    } 
    return mat;
}

void LerMatriz(int **mat, int lin, int col){
    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            cout << "[" << i+1 << ", " << j+1 << "]: ";
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

void InverterMatriz(int **mat, int lin, int col){
    for(int i=lin-1; i>=0; i--){
        for(int j=col-1; j>=0; j--){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int lin, col;
    cout << "Quantidade de Linhas: ";
    cin >> lin;
    cout << "Quantidade de Colunas: ";
    cin >> col;

    int **mat = CriarMatriz(lin, col);
    LerMatriz(mat, lin, col);
    ImprimirMatriz(mat, lin, col);
    cout << "-------------------" << endl;
    InverterMatriz(mat, lin, col);

    return 0;
}