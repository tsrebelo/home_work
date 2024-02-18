#include <iostream>
using namespace std;

//Arrays unidimensional
float notas[5];
float min = 0;
float max = 0;

int main(){
   
    cout << "Introduza as notas dos alunos." << endl;
    cout << "Aluno 1: ";
    cin >> notas[0];
    cout << "Aluno 2: ";
    cin >> notas[1];
    cout << "Aluno 3: ";
    cin >> notas[2];
    cout << "Aluno 4: ";
    cin >> notas[3];
    cout << "Aluno 5: ";
    cin >> notas[4];

    for(int x = 0; x < 1; x++){
        cout << "A média das notas é: " << (notas[0] + notas[1] + notas[2] + notas[3] + notas[4]) / 5 << endl;
    }

    return 0;
}
