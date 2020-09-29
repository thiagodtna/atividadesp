#include <iostream>
#include <fstream>

using namespace std;
int main(){
int lin=10, col=10;
    int Item[lin][col], Item2[lin][col], Result[lin][col];
    string nomeArq, nomeArq2;
    ifstream arquivoE, arquivoEE, meuArq, meuArq2;

    while (!arquivoE.is_open()){
        cout << "Nome do 1º arquivo: ";
        cin >> nomeArq;
        arquivoE.open(nomeArq);

        if (arquivoE.is_open()){
            cout << "Nome do 2º arquivo: ";
            cin >> nomeArq2;
            arquivoEE.open(nomeArq2);

            if (arquivoEE.is_open()){
                meuArq.open(nomeArq);
                meuArq2.open(nomeArq2);
                arquivoE.seekg(0);
                arquivoEE.seekg(0);

                for (int x = 0; x < lin; x++){
                    for (int y = 0; y < col; y++){
                    meuArq >> Item[x][y];
                    meuArq2 >> Item2[x][y];
                    }
                }
                for (int x = 0; x < lin; x++){
                    for (int y = 0; y < col; y++){
                        Result[x][y] = Item[x][y] + Item2[x][y];
                    }
                }
                for (int x = 0; x < lin; x++){
                    for (int y = 0; y < col; y++){
                        cout << Result[x][y] << " ";
                    }
                    cout << endl;
                }

            }
            else{
                cout << "Arquivo não encontrado" << endl;
            }
        }
        else{
            cout << "Arquivo não encontrado" << endl;
        }
    }
    arquivoE.close();
    meuArq.close();
    arquivoEE.close();
    meuArq2.close();

}
}
