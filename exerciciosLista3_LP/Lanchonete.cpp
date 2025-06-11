//Problema 9: Lanchonete 

#include <iostream>
#include <iomanip>
using namespace std;

class Lanchonete {
private:
    int codigo;
    int quantidade;

public:
    Lanchonete(int c, int q) {
        codigo = c;
        quantidade = q;
    }

    float calcularTotal() {
        float preco = 0.0f;
        switch (codigo) {
            case 1: preco = 5.00f; break;
            case 2: preco = 3.50f; break;
            case 3: preco = 4.80f; break;
            case 4: preco = 8.90f; break;
            case 5: preco = 7.32f; break;
            default: preco = 0.0f; break;
        }
        return preco * quantidade;
    }

    void exibirTotal() {
        cout << fixed << setprecision(2);
        if (calcularTotal() > 0)
            cout << "Valor total: R$ " << calcularTotal() << endl;
        else
            cout << "Codigo invalido." << endl;
    }
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int codigo, quantidade;
    cout << "Digite o codigo do produto comprado: ";
    cin >> codigo;
    cout << "Digite a quantidade: ";
    cin >> quantidade;

    Lanchonete pedido(codigo, quantidade);
    pedido.exibirTotal();

    return 0;
}

