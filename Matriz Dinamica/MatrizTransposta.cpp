#include <iostream>
using namespace std;

int** CriarMatriz(int l, int c){
    int **mat;
    mat = new int*[l];
    for(int i = 0; i < l; i++){
        mat[i] = new int[c];
    }
    return mat;
}

void LerMatriz(int **mat, int l, int c){
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){ 
            cout << "[" << i + 1 << ", " << j + 1 << "]: ";
            cin >> mat[i][j];
        }
    }
}

void ImprimirMatriz(int **mat, int l, int c){
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void MatrizTransposta(int **mat, int l, int c){
    for(int i = 0; i < c; i++){
        for(int j = 0; j < l; j++){
            cout << mat[j][i] << " ";
        }
        cout << endl;
    }
}

int main(){
    int l, c;
    cout << "Quantidade de linhas: ";
    cin >> l;
    cout << "Quantidade de colunas: ";
    cin >> c;

    int** mat = CriarMatriz(l, c);
    LerMatriz(mat, l, c);
    ImprimirMatriz(mat, l, c);
    cout << endl;
    MatrizTransposta(mat, l, c);

    system("Pause");
    return 0;
}