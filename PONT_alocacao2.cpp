#include <iostream>
#include <iomanip>

using namespace std;

//Struct Notas
struct Notas{
    float notas;
    float media;

    //Função que insere as notas no vetor
    void insere(float newNotas){
        notas = newNotas;
    }
    
};


int main(){

    //Declaração de variaveis
    Notas *notas = new Notas[4];
    Notas media1, media2;
    Notas n1,n2,n3,n4;
    int qtdAlunos;
    float aux;

    //quantidade de alunos
    cin >> qtdAlunos;

    //Inserindo as notas do primeiro aluno
    notas[0] = n1;
    notas[1] = n2;
    notas[2] = n3;
    notas[3] = n4;
    media1.media = 0;

    for(int i = 0; i < 4; i++){
        cin >> aux; 
        notas[i].insere(aux);
        //Calculando a média do primeiro aluno
        media1.media += notas[i].notas/4;
    }

    //Inserindo as notas do segundo aluno
    notas[0] = n1;
    notas[1] = n2;
    notas[2] = n3;
    notas[3] = n4;
    media2.media = 0;

    for(int i = 0; i < 4; i++){
        cin >> aux; 
        notas[i].insere(aux);
        //Calculando a média do segundo aluno
        media2.media += notas[i].notas/4;
    }

    //Printando na tela media da media dos dois alunos com duas casas decimais
    cout <<fixed<<setprecision(2)<< ((media1.media + media2.media) / 2);


    return 0;
}