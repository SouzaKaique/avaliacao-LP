//Problema 5: Troco ou Falta

#include <iostream>
#include <iomanip>
using namespace std;

class Venda {
private:
    float precoUnitario;
    int quantidade;
    float valorRecebido;

public:
    Venda(float preco, int qtd, float recebido) {
        precoUnitario = preco;
        quantidade = qtd;
        valorRecebido = recebido;
    }

    void calcularTroco() {
        float total = precoUnitario * quantidade;
        float diferenca = valorRecebido - total;

        cout << fixed << setprecision(2);
        if (diferenca >= 0) {
            cout << "Troco = R$ " << diferenca << endl;
        } else {
            cout << "Dinheiro insuficiente, falta R$: " << - diferenca << endl;
        }
    }
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    float preco, recebido;
    int qtd;

    cout << "Preco unitario do produto: ";
    cin >> preco;
    cout << "Quantidade comprada: ";
    cin >> qtd;
    cout << "Dinheiro recebido: ";
    cin >> recebido;

    Venda venda(preco, qtd, recebido);
    venda.calcularTroco();

    return 0;
}

