#include <iostream>

using namespace std;

//Criando uma estrutura
struct Carro{
    string nome;
    string cor;
    int pot;
    int velMax;
};

int main(){

    Carro car1; // Variavel car1 do tipo Carro
    Carro car2; // Variavel car2 do tipo Carro

    //Propriedades do car1
    car1.nome = "Tornado";
    car1.cor = "Vermelho";
    car1.pot = 450;
    car1.velMax = 350;

    //Propriedades do car2
    car2.nome = "Luxo";
    car2.cor = "Preto";
    car2.pot = 250;
    car2.velMax = 260;

    //Utilizando as propriedades do car1
    cout << "Nome: " << car1.nome << "\n";
    cout << "Cor: " << car1.cor << "\n";
    cout << "Potencia: " << car1.pot << "\n";
    cout << "Velocidade Maxima: " << car1.velMax << "\n\n";

    //Utilizando as propriedades do car2
    cout << "Nome: " << car2.nome << "\n";
    cout << "Cor: " << car2.cor << "\n";
    cout << "Potencia: " << car2.pot << "\n";
    cout << "Velocidade Maxima: " << car2.velMax << "\n";



    return 0;
}