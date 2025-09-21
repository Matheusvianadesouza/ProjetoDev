#include <iostream>
using namespace std;

// Função para calcular a média
float medianota(int notas[], int numnota) {
    int soma = 0;
    for(int i = 0; i < numnota; i++) {
        soma += notas[i];
    }
    return (float)soma / numnota; // retorna a média
}

// Função para encontrar a menor nota
float menornota(int notas[], int numnota){
    int menor = notas[0];
    for(int i = 1; i < numnota; i++){
        if(notas[i] < menor){
            menor = notas[i];
        }
    }
    return (float)menor;
}

// Função para encontrar a maior nota
float maiornota(int notas[], int numnota){
    int maior = notas[0];
    for(int i = 1; i < numnota; i++){
        if(notas[i] > maior){
            maior = notas[i];
        }
    }
    return (float)maior;
}

int main() {
    int numnota;
    cout << "Digite o numero de notas: ";
    cin >> numnota;

    int notas[numnota];
    for(int i = 0; i < numnota; i++) {
        cout << "Por favor digite a " << i+1 << "ª nota: ";
        cin >> notas[i];
    }

    float media = medianota(notas, numnota);
    float menor = menornota(notas, numnota);
    float maior = maiornota(notas, numnota);

    cout << "A media e: " << media << endl;
    cout << "O menor e: " << menor << endl;
    cout << "A maior e: " << maior << endl;

    return 0;
}
