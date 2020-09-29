#include <iostream>
#include <fstream>

using namespace std;
int main(){


int vetor[10];

    for(int i = 0; i < 10; i++){

        cout << "Digite o " << (i+1) << "º numero: ";
        cin >> vetor[i];
    }
    for (int i = 0; i <10; i++){
        cout << vetor[i] << endl;
    }
}

