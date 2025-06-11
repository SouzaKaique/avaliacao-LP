//Problema 4: Plano de Telefonia

#include <iostream>
#include <iomanip>
using namespace std;

class PlanoTelefone {
private:
    int minutos;
    const double valorBase = 50.00;
    const int franquia = 100;
    const double valorExcedente = 2.00;

public:
    PlanoTelefone(int m) {
        minutos = m;
    }

    double calcularValor() {
        if (minutos <= franquia) return valorBase;
        return valorBase + (minutos - franquia) * valorExcedente;
    }

    void exibirValor() {
        cout << fixed << setprecision(2);
        cout << "Valor a pagar: R$ " << calcularValor() << endl;
    }
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int minutos;
    cout << "Digite a quantidade de minutos: ";
    cin >> minutos;
    
    PlanoTelefone plano(minutos);
    plano.exibirValor();
    return 0;
}

