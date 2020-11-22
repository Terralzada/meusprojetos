#include <iostream>
using namespace std;


#define vazio '.'
#define parede '#'
#define deOndeVeio 'A'
#define queijo 'Q'
#define rato 'R'
#define entrada 'E'
#define largura 5
#define altura 5


#define cima 0
#define baixo 1 
#define esquerda 2 
#define direita 3
#define inicio 4


void exibirMapa (char mapa [largura][altura]){   
    for(int i = 0;i<largura;i++){
        for(int j = 0; j<altura;j++){
            cout<<mapa[i][j]<<"\t";

        }
        cout << endl;
    }
}
    int main(){
        char mapa[largura][altura];

        for(int = 0; i<largura ; i++) {
            for(int = 0; j<altura ; j++) {
                mapa[i][j] = vazio;
            }
        }
        mapa[0][0] = entrada;
        mapa[0][3]= parede;
        mapa[1][3] = parede;
        mapa[2][3] = parede;
        mapa[3][3]= parede;
        mapa[3][3] = queijo;
    exibirmapa(mapa);
    }

    
    
bool navegar(char labirinto [largura][altura], int X , int Y , char deOndeVeio, bool &queijo){
    if(X < 0 || Y < 0 || X >= largura || Y >= altura){
        return false;

    }else if (labirinto[X][Y]==queijo){

        return true;
    }   
    else if (labirinto[X][Y] == parede || labirinto [X][Y] == visitando){
        return false;
    }else{

        if(deOndeVeio != direita and navegar(labirinto,X,Y+1, esquerda, queijo)){
            exibirMapa;
            [X][Y] = '+'
            return true;

        }
        else if (deOndeVeio != baixo and navegar(labirinto,X+1,Y, cima, queijo)){
            exibirMapa;
            [X][Y] = '+';
            return true;

        }

        else if (deOndeVeio != esquerda and navegar(labirinto,X,Y-1, direita,queijo)){
            exibirMapa;
            [X][Y] = '+';
            return true;

        }

        else if (deOndeVeio != cima and navegar(labirinto,X-1, Y, baixo, queijo)){
            exibirMapa;
            [X][Y] = '+';
            return true;

        

        }    
        exibirMapa;    
    }    
    return false;


    }