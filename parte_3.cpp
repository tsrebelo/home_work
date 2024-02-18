#include <iostream>
using namespace std;

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
