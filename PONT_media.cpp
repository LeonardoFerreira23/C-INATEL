#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(){
    float *p;
    float aux;
    int tam;

    //Declarando o tamanho do array
    cin >> tam;

    //Criando array e alocando memória
    float* v = (float*) malloc(tam * sizeof(float));
    
    //Inserindo valores no array atráves de um ponteiro
    p = v;
    for(int i = 0;i < tam;i++){
        cin >> aux;
        *p = aux;
        p++;
    }
    
    //Varrendo o array atráves de um ponteiro, e calculando a média
    p = v;
    aux = 0;
    for(int i = 0; i < tam;i++){
        aux += *p/tam;
        p++;
    }
    
    cout <<fixed<<setprecision(2)<< aux;

    return 0;
}