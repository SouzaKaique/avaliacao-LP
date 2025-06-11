//Problema 1: Notas

#include <iostream>
#include <iomanip>
using namespace std;

class Aluno {
private:
    float nota1;
    float nota2;

public:
    Aluno(float n1, float n2) {
        nota1 = n1;
        nota2 = n2;
    }

float calcularNotaFinal() {
        return nota1 + nota2;
    }

void exibirResultado() {
        float notaFinal = calcularNotaFinal();
        cout << fixed << setprecision(1);
        cout << "Nota final: " << notaFinal << endl;

        if (notaFinal < 60.0) {
            cout << "REPROVADO" << endl;
        }
    }
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    string nome;
    float n1, n2;

    cout << "Digite a nota do primeiro semestre: ";
    cin >> n1;

    cout << "Digite a nota do segundo semestre: ";
    cin >> n2;

    Aluno aluno(n1, n2);

    aluno.exibirResultado();

    return 0;
}

