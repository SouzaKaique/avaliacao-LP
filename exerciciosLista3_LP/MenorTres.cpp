//Problema 3: Menor de Três

#include <iostream>
using namespace std;

class Comparador {
private:
    int num1, num2, num3;

public:
    Comparador(int a, int b, int c) {
        num1 = a;
        num2 = b;
        num3 = c;
    }

    int menor() {
        int menor = num1;
        if (num2 < menor) menor = num2;
        if (num3 < menor) menor = num3;
        return menor;
    }

    void mostrarMenor() {
        cout << "MENOR = " << menor() << endl;
    }
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int a, b, c;
    cout << "Digite o primeiro valor: ";
    cin >> a;
    cout << "Digite o segundo valor: ";
    cin >> b;
    cout << "Digite o terceiro valor: ";
    cin >> c;
    
    Comparador comp(a, b, c);
    comp.mostrarMenor();
    return 0;
}

