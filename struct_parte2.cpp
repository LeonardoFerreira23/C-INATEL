#include <iostream>

using namespace std;

//Criando uma estrutura
struct Carro{
    string nome;
    string cor;
    int pot;
    int velMax;
    int vel;

    //Criando uma função dentro de uma struct
    //Função que insere valores na struct
    void insere(string stnome, string stcor, int stpot, int stvelMax){
        nome = stnome;
        cor = stcor;
        pot = stpot;
        velMax = stvelMax;
        vel = 0;
    }

    //Função que mostra as informações da strcut
    void mostraInfo(){
        cout << "Nome: " << nome << "\n";
        cout << "Cor: " << cor << "\n";
        cout << "Potencia: " << pot << "\n";
        cout << "Velocidade atual: " << vel << "\n";
        cout << "Velocidade Maxima: " << velMax << "\n\n";
    }

    //Função que muda a variavel vel na struct
    void mudaVel(int mv){
        vel = mv;
        if(vel > velMax){ 
            vel = velMax;
        }
        if (vel < 0){
            vel = 0;
        }
    }
};

int main(){

    //Criando varivels do tipo Carro
    Carro car1,car2,car3,car4;

    //Inserindo valores na variavel car1 através da função 'insere'
    car1.insere("Tornado","Vermelho",450,350);

    //Printando valores na tela com a função 'mostraInfo'
    car1.mostraInfo();
    
    //Alterando a variavel 'vel' com a função 'mudaVel'
    car1.mudaVel(150);

    //Printando valores na tela com a função 'mostraInfo'
    car1.mostraInfo();
    

    return 0;
}