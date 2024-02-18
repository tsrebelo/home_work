/**
 *
 * @file parte_2.cpp
 * @author Telma Rebelo
 * @brief Parte 2 - Arrays
 * @date 24-02-18
 * 
*/

#include <iostream>
using namespace std;

float notas[5];

int main(){

//Média das notas
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

cout << endl;

float mediaNotas = (notas[0] + notas[1] + notas[2] + notas[3] + notas[4]) / 5;
    for(int w = 0; w < 1; w++){
        cout << "A média das notas é " << mediaNotas << "." << endl;
    }

float maiorNota = notas[0];
    for(int x = 0; x < 5; x++){
        if(notas[x] > maiorNota){
            maiorNota = notas[x];
        }
    }
    cout << "A maior nota é " << maiorNota << "." << endl;
    
float menorNota = notas[0];
    for(int y = 0; y < 5; y++){
        if(notas[y] < menorNota){
            menorNota = notas[y];
        }
    }
    cout << "A menor nota é " << menorNota << "." << endl;
cout << endl;
    
//Array[10]
int arr[10] = {59, 31, 49, 51, 28, 72, 89, 52, 63, 24};
    cout << "Os números são: " << endl;
    
    for(int z = 0; z < 10; z++){
        cout << arr[z] << " ";
    }
cout << endl;

int maiorArr = arr[0];
    for(int a = 0; a < 10; a++){
        if(arr[a] > maiorArr){
            maiorArr = arr[a];
        }
    }
    cout << "O maior número é " << maiorArr << "." << endl;
    
int menorArr = arr[0];
    for(int b = 0; b < 10; b++){
        if(arr[b] < menorArr){
            menorArr = arr[b];
        }
    }
    cout << "O menor número é " << menorArr << "." << endl;
    
    return 0;
}
