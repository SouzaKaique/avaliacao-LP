//Problema 10: Múltiplos 

#include <iostream>
using namespace std;

class Multiplos {
private:
    int num1, num2;

public:
    Multiplos(int a, int b) {
        num1 = a;
        num2 = b;
    }

    bool saoMultiplos() {
        if (num1 == 0 || num2 == 0) return false;
        return (num1 % num2 == 0) || (num2 % num1 == 0);
    }

    void mostrarResultado() {
        if (saoMultiplos()) {
            cout << "Sao multiplos" << endl;
        } else {
            cout << "Nao sao multiplos" << endl;
        }
    }
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int a, b;
    cout << "Digite dois numeros inteiros: ";
    cin >> a >> b;

    Multiplos m(a, b);
    m.mostrarResultado();

    return 0;
}

