#include <iostream>
#include <fstream>

using namespace std;
int main(){
    int tam=10;
    int vetor[tam], maior, menor;
    float media, total=0.0;

    for (int i = 0; i < tam; i++){
        cout << "Digite o " << (i+1) << "� numero: ";
        cin >> vetor[i];

        total += vetor[i];
        maior = vetor[i];
        menor = vetor[i];
    }
    for (int i = 0; i < tam; i++){
        if (maior < vetor[i]){
            maior = vetor[i];
        }
        if (menor > vetor[i]){
            menor = vetor[i];
        }
    }
    media = (total/tam);

    cout << "Maior n�mero: " << maior << endl;
    cout << "Menor n�mero: " << menor << endl;
    cout << "Media: " << media << endl;
}
