//Problema 11: Aumento Salarial

#include <iostream>
#include <iomanip>
using namespace std;

class ReajusteSalarial {
private:
    float salario;

public:
    ReajusteSalarial(float s) {
        salario = s;
    }

    void calcularReajuste() {
        float percentual;

        if (salario <= 1000.0f) percentual = 20.0f;
        else if (salario <= 3000.0f) percentual = 15.0f;
        else if (salario <= 8000.0f) percentual = 10.0f;
        else percentual = 5.0f;

        float aumento = salario * percentual / 100.0f;
        float novoSalario = salario + aumento;

        cout << fixed << setprecision(2);
        cout << "Novo salario: R$ " << novoSalario << endl;
        cout << "Aumento: R$ " << aumento << endl;
        cout << "Porcentagem: " << percentual << " %" << endl;
    }
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    float salario;
    cout << "Digite o salario: ";
    cin >> salario;

    ReajusteSalarial reajuste(salario);
    reajuste.calcularReajuste();

    return 0;
}

