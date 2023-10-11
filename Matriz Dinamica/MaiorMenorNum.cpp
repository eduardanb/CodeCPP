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

int MaiorElemento(int **mat, int l, int c){
    int MaiorNum = mat[0][0];
    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            if(MaiorNum < mat[i][j]){
                MaiorNum = mat[i][j];
            }
        }
    }
    return MaiorNum;
}

int MenorElemento(int **mat, int l, int c){
    int MenorNum = mat[0][0];
    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            if(MenorNum > mat[i][j]){
                MenorNum = mat[i][j];
            }
        }
    }
    return MenorNum;
}

int main(){
    int l, c;
    cout << "Linhas: ";
    cin >> l;
    cout << "Colunas: ";
    cin >> c;

    int **mat = CriarMatriz(l, c);
    LerMatriz(mat, l, c);

    int NumeroMaior = MaiorElemento(mat, l, c);
    cout << "Maior Numero: " << NumeroMaior << endl;

    int NumeroMenor = MenorElemento(mat, l, c);
    cout << "Numero menor: " << NumeroMenor << endl;
    
    ImprimirMatriz(mat, l, c);


    return 0;
}