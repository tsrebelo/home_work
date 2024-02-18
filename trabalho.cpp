#include <iostream>
using namespace std;

//Parte 1
//Calculadora básica
int a;
int b;

int main(){

    cout << "Introduza o primeiro valor: ";
    cin >> a;
    
    cout << "Introduza o segundo valor: ";
    cin >> b;
    
    cout << "A soma: " << a + b << endl;
    cout << "A diferença: " << a - b << endl;
    cout << "O produto: " << a * b << endl;
    cout << "A divisão: " << a / b << endl;
    cout << "O resto da divisão: " << a % b << endl;

    return 0;
}

//Constantes
const double PI = 3.14159;
int r;
int area;

int main(){
    cout << "Defina o valor de 'r': ";
    cin >> r;
    area = PI * r * r;
    cout << "A área do circulo é: " << area << endl;

    return 0;
}

//Parte 2
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

}

//Parte 3
//Ciclo for - Tabuada
int n;

int main(){
    
    cout << "Esta é uma tabuada digital." << endl;
    cout << "Escolha um número entre 0 e 10: ";
    cin >> n;
    
    for(int i = 0; i <= 10; i++){
        cout << n << "x" << i << "=" << n * i << endl;
    }
    
    return 0;
}
