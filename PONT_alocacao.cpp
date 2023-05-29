#include <iostream>

using namespace std;

//Struct notas
struct Notas{
    float nota;
    float media;
};



int main(){

    //Criando 4 notas na struct
    Notas n1,n2,n3,n4;
    Notas media;

    //Inserindo valores das notas na struct
    cin >> n1.nota >> n2.nota >> n3.nota >> n4.nota;
    //Calculando a média e inserindo na struct
    media.media = ((n1.nota + n2.nota + n3.nota + n4.nota) / 4);


    cout << media.media;
    

    return 0;
}