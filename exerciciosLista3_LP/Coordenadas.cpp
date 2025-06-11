//Problema 13: Coordenadas Cartesianas

#include <iostream>
using namespace std;

class Ponto {
private:
    float x, y;

public:
    Ponto(float a, float b) {
        x = a;
        y = b;
    }

void determinarQuadrante() {
        if (x == 0 && y == 0) {
            cout << "Origem" << endl;
        } else if (x == 0) {
            cout << "Eixo Y" << endl;
        } else if (y == 0) {
            cout << "Eixo X" << endl;
        } else if (x > 0 && y > 0) {
            cout << "Q1" << endl;
        } else if (x < 0 && y > 0) {
            cout << "Q2" << endl;
        } else if (x < 0 && y < 0) {
            cout << "Q3" << endl;
        } else {
            cout << "Q4" << endl;
        }
    }
};

int main() {
	setlocale(LC_ALL, "Portuguese");

    float x, y;
    cout << "Digite a coordenada de X: ";
    cin >> x;
    cout << "Digite a coordenada de Y: ";
    cin >> y;

    Ponto p(x, y);
    p.determinarQuadrante();

    return 0;
}

