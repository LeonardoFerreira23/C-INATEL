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
        cin >> *p;
        p++;
    }
    
    //Varrendo o array atráves de um ponteiro, e verificando o maior elemendo do array
    p = v;
    float maior = 0;
    for(int i = 0; i < tam;i++){
        if(*p > maior){
            maior = *p;
        }
            p++;
    }
    
    //printando o maior elemento do array
    cout << maior;

    return 0;
}