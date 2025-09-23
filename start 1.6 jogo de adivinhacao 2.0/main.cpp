#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int geranumerosecreto() {
    srand(time(0));
    int numeroSecreto = rand() % 50 + 1; // de 1 a 50
    return numeroSecreto;
}

int jogo(int numeroSecreto) {
    int i = 0, tentativa = 0;

    while (tentativa != numeroSecreto) { // só sai quando acertar
        cout << "Digite um numero entre 1 e 50: ";
        cin >> tentativa;

        if (tentativa > 50 || tentativa < 1) {
            cout << "Esse numero NAO vale! Tem que ser entre 1 e 50." << endl;
        }
        else if (tentativa < numeroSecreto) {
            cout << "Aumenta esse numero ai!" << endl;
        }
        else if (tentativa > numeroSecreto) {
            cout << "Diminui esse numero campeao!" << endl;
        }

        i++;
    }

    return i; // retorna o número de tentativas
}

int main() {
    cout << "===== Jogo de Adivinhacao =====" << endl;
    cout << "Tente adivinhar o numero secreto entre 1 e 50!" << endl;

    int numeroSecreto = geranumerosecreto();
    int tentativas = jogo(numeroSecreto);

    cout << "\nMuito bem! O numero secreto era " << numeroSecreto
         << ". Voce acertou em " << tentativas << " tentativas." << endl;

    return 0;
}
