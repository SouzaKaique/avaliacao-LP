//Problema 6: Medidor de Glicose

#include <iostream>
using namespace std;

class Glicose {
private:
    float nivel;

public:
    Glicose(float n) {
        nivel = n;
    }

    void classificar() {
        if (nivel <= 100.0f) {
            cout << "Classificacao: Normal" << endl;
        } else if (nivel <= 140.0f) {
            cout << "Classificacao: Elevado" << endl;
        } else {
            cout << "Classificacao: Diabetes" << endl;
        }
    }
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    float valor;
    cout << "Digite o nivel de glicose: ";
    cin >> valor;

    Glicose exame(valor);
    exame.classificar();

    return 0;
}

