//Problema 12: Duração do Jogo

#include <iostream>
using namespace std;

class Jogo {
private:
    int horaInicio;
    int horaFim;

public:
    Jogo(int inicio, int fim) {
        horaInicio = inicio;
        horaFim = fim;
    }

    int calcularDuracao() {
        if (horaFim > horaInicio)
            return horaFim - horaInicio;
        else
            return 24 - horaInicio + horaFim;
    }

    void exibirDuracao() {
        cout << "Duracao do jogo: " << calcularDuracao() << " hora(s)" << endl;
    }
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int inicio, fim;
    cout << "Digite a hora inicial: ";
    cin >> inicio;
    cout << "Digite a hora final: ";
    cin >> fim;

    Jogo jogo(inicio, fim);
    jogo.exibirDuracao();

    return 0;
}

