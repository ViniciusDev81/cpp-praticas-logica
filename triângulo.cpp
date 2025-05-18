#include <iostream>
using namespace std;

int main() {
    int linhas;
    
    // Solicita ao usuário a quantidade de linhas do triângulo
    cout << "Quantas linhas deve ter o triângulo? ";
    cin >> linhas;

    // Loop para imprimir cada linha do triângulo
    for (int i = 1; i <= linhas; i++) {
        // Imprime i asteriscos
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Nova linha após cada linha do triângulo
        cout << endl;
    }

    return 0;
}