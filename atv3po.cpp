#include <iostream>
#include <fstream>

using namespace std;
int main(){

int tam;
    char sn, resp='1';
    cout << "Digite o tamanho da matriz quadrada  (questão pede 10x10 mas sugiro uma menor): ";
    cin >> tam;


        int matriz[tam][tam], linha=0, coluna=0;

        for (linha = 0; linha < tam; linha++){
            for (coluna = 0; coluna < tam; coluna++){


                cout << "Digite o " << (coluna+1) << "º numero da linha " << (linha+1) << ": ";
                cin >> matriz[linha][coluna];
            }
        }
        for (int l = 0; l < tam; l++){
            for (int c = 0; c < tam; c++){
                cout << matriz[l][c] << "    ";
            }
            cout << endl;
        }


}
