#include <iostream>
using namespace std;

float notas[5];

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

float mediaNotas = (notas[0] + notas[1] + notas[2] + notas[3] + notas[4]) / 5;
    for(int x = 0; x < 1; x++){
        cout << "A média das notas é " << mediaNotas << endl;
    }

float maiorNota = notas[0];
    for(int y = 0; y < 5; y++){
        if(notas[y] > maiorNota){
            maiorNota = notas[y];
        }
    }
    cout << "A maior nota é " << maiorNota << endl;
    
float menorNota = notas[0];
    for(int z = 0; z < 5; z++){
        if(notas[z] < menorNota){
            menorNota = notas[z];
        }
    }
    cout << "A menor nota é " << menorNota << endl;
    
    
    
int arr[10] = {59, 31, 49, 51, 23, 72, 89, 52, 64, 24};

    for(int w = 0; w < 10; w++){
        cout << arr[0] << endl;
    }

int maiorArr = arr[0];
    for(int a = 0; a < 5; a++){
        if(arr[a] < maiorArr){
            maiorArr = arr[a];
        }
    }
    cout << "O maior número é " << menorNota << endl;
    
    
    
    return 0;
}
