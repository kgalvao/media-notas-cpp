#include <iostream>
using namespace std;

int main() {
    int n;
    float nota, soma = 0.0, media;

    // Pergunta o número de notas
    cout << "Quantas notas voce deseja inserir? ";
    cin >> n;

    // Verifica se o número de notas é válido
    if (n <= 0) {
        cout << "Número invalido de notas!" << endl;
        return 1;
    }

    // Leitura das notas e soma
    for (int i = 1; i <= n; i++) {
        cout << "Digite a nota " << i << ": ";
        cin >> nota;
        soma += nota;  // Acumulando a soma das notas
    }

    // Cálculo da média
    media = soma / n;

    // Exibindo o resultado
    if(media >= 6) {
        cout << "Aprovado! Media: " << media << endl;
    } else {
        cout << "Reprovado, continue tentando. Media: " << media << endl;
    }

    return 0;
}
