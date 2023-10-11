#include <iostream>
using namespace std;

float** CriarMatriz(int NumAlunos, int NumNotas){
    float **mat;
    mat = new float*[NumAlunos];
    for(int i=0; i<NumAlunos; i++){
        mat[i] = new float[NumNotas];
    }
    return mat;
}

void LerMatriz(float **mat, int NumAlunos, int NumNotas){
    for(int i=0; i<NumAlunos; i++){
        cout << "Notas do " << i+1 << "# aluno: ";
         for(int j=0; j<NumNotas; j++){
            cin >> mat[i][j];
        }
    }
}

float CalMedia(float *notas, int Numnotas){
    float soma = 0;
    for(int i=0; i<Numnotas; i++){
        soma += notas[i];
    }
    return soma/Numnotas;

}

void ImprimirResultado(float** matriz, int numAlunos, int numNotas) {
    for (int i = 0; i < numAlunos; i++) {
        float media = CalMedia(matriz[i], numNotas);
        cout << "MÃ©dia do aluno " << i + 1 << ": " << media << " - ";
        if (media >= 7) {
            cout << "Aprovado" << endl;
        } else if (media >= 4) {
            cout << "Prova final" << endl;
        } else {
            cout << "Reprovado" << endl;
        }
    }
}

int main(){
    int NumAlunos, NumNotas;
    cout << "Quantidade de Alunos: ";
    cin >> NumAlunos;
    cout << "Quantidade de Notas: ";
    cin >> NumNotas;

    float **mat = CriarMatriz(NumAlunos, NumNotas);
    LerMatriz(mat, NumAlunos, NumNotas);
    ImprimirResultado(mat, NumAlunos, NumNotas);

    return 0;
}