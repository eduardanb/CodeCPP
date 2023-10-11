#include <iostream>
using namespace std;

int** CriarMatriz(int l, int c){
    int **mat = new int*[l];
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

void EncontrarIndicesMaiorMenor(int **mat, int l, int c, int &linhaMaior, int &colunaMaior, int &linhaMenor, int &colunaMenor){
    int MaiorNum = mat[0][0];
    int MenorNum = mat[0][0];

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            if(MaiorNum < mat[i][j]){
                MaiorNum = mat[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
            if(MenorNum > mat[i][j]){
                MenorNum = mat[i][j];
                linhaMenor = i;
                colunaMenor = j;
            }
        }
    }
}

int main(){
    int l, c;
    cout << "Linhas: ";
    cin >> l;
    cout << "Colunas: ";
    cin >> c;

    int **mat = CriarMatriz(l, c);
    LerMatriz(mat, l, c);

    int linhaMaior = 0, colunaMaior = 0, linhaMenor = 0, colunaMenor = 0;
    EncontrarIndicesMaiorMenor(mat, l, c, linhaMaior, colunaMaior, linhaMenor, colunaMenor);

    cout << "Maior Numero: " << mat[linhaMaior][colunaMaior] << " (Linha: " << linhaMaior + 1 << ", Coluna: " << colunaMaior + 1 << ")" << endl;
    cout << "Menor Numero: " << mat[linhaMenor][colunaMenor] << " (Linha: " << linhaMenor + 1 << ", Coluna: " << colunaMenor + 1 << ")" << endl;

    cout << "Matriz:" << endl;
    ImprimirMatriz(mat, l, c);

    // Libere a memÃ³ria alocada
    for(int i = 0; i < l; i++){
        delete[] mat[i];
    }
    delete[] mat;

    return 0;
}