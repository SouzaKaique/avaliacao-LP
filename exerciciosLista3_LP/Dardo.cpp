// Problema 7: Lançamento de Dardo

#include <iostream>

using namespace std; 

class Arremesso {
private:
    float tentativa1, tentativa2, tentativa3;

public:
    Arremesso(float t1, float t2, float t3) {
        tentativa1 = t1;
        tentativa2 = t2;
        tentativa3 = t3;
    }

    float maiorDistancia() {
        float maior = tentativa1;
        if (tentativa2 > maior) maior = tentativa2;
        if (tentativa3 > maior) maior = tentativa3;
        return maior;
    }

    void exibirResultado() {
        cout << "Maior distancia = " << maiorDistancia() << endl;
    }
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    float t1, t2, t3;
    cout << "Digite as tres distancias:" << endl;
    cin >> t1 >> t2 >> t3;

    Arremesso atleta(t1, t2, t3);
    atleta.exibirResultado();

    return 0;
}

