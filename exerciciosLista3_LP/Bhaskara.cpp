//Problema 2: Fórmula de Bhaskara

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

class EquacaoSegundoGrau {
private:
    float a, b, c;

public:
    EquacaoSegundoGrau(float coefA, float coefB, float coefC) {
        a = coefA;
        b = coefB;
        c = coefC;
    }

    double calcularDelta() {
        return (b * b) - (4 * a * c);
    }

void resolverEquacao() {
        cout << fixed << setprecision(4);
        
        if (a == 0) {
            cout << "Não é uma equação do segundo grau (a = 0)." << endl;
            return;
        }

        double delta = calcularDelta();

        if (delta < 0) {
            cout << "A equação não possui raízes reais." << endl;
        } else {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "Raiz x1 = " << x1 << endl;
            cout << "Raiz x2 = " << x2 << endl;
        }
    }
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    float a, b, c;

    cout << "Digite o coeficiente a: ";
    cin >> a;
    cout << "Digite o coeficiente b: ";
    cin >> b;
    cout << "Digite o coeficiente c: ";
    cin >> c;
    
    EquacaoSegundoGrau eq(a, b, c);

    eq.resolverEquacao();

    return 0;
}
