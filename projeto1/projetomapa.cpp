#include <iostream>
using namespace std;

const char espaco = '.';
const char parede = '#';
const char queijo = 'Q';
const char entrada = 'E';
const int largura = 5;
const int altura = 5;


void exibirMapa (char mapa [largura][altura]){   
    for(int i = 0;i<largura;i++){
        for(int j == 0; j<altura;j++){
            cout<<mapa[i][j]<<"\t";

        }
        cout << endl;
    }
}
    int main(){
        char mapa[largura][altura];

        for(int = 0 ; i<largura; i++) {
            for(int = 0; j<altura;j++) {
                mapa[i][j] = espaco;
            }
        }
    exibirmapa(mapa);

    return 0;
    }