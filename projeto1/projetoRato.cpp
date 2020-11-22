#include <iostream>
using namespace std;


#define vazio '.'
#define parede '#'
#define deOndeVeio 'E'
#define queijo 'Q'
#define rato 'R'
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
        mapa[1][3] = parede;
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
        //mexernomapa
        //mostrarmapa

        if(deOndeVeio != direita and navegar(labirinto,X,Y+1, esquerda, queijo)){
            //atualizar mapa e exibir
            return true;

        }
        else if (deOndeVeio != baixo and navegar(labirinto,X+1,Y, cima, queijo)){
            //atualizar mapa e exibir
            return true;

        }

        else if (deOndeVeio != esquerda and navegar(labirinto,X,Y-1, direita,queijo)){
            //atualizar mapa e exibir
            return true;

        }

        else if (deOndeVeio != cima and navegar(labirinto,X-1, Y, baixo, queijo)){
            //atualizar mapa e exibir
            return true;

        

        }    
        //exibir mapa    
    }    
    return false;


    }