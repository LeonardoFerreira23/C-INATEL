#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(){
    int *p;
    int tam;

    //Declarando o tamanho do array
    cin >> tam;

    //Criando array e alocando memória
    int* v = (int*) malloc(tam * sizeof(int));
    
    //Inserindo valores no array atráves de um ponteiro
    p = v;
    for(int i = 0;i < tam;i++){
        cin >> *p;
        p++;
    }
    
    //Varrendo o array atráves de um ponteiro, e verificando o maior elemendo do array
    p = v;
    int aux = 0;
    for(int i = 0; i < tam;i++){
        if(((*p%2==0) && (*p > 0))){
            aux++;
        }
            p++;
    }
    
    //printando o maior elemento do array
    cout << aux;

    return 0;
}