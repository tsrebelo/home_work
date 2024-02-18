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
float notas[5] = {1 ,2 ,3 ,4 ,5};

int main(){

    for(int i = 0; i < 5; i++){
        cout << notas[i] << " ";
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
