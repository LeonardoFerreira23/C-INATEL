#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int *p;
    int aux;
    int tam;

    //Declarando o tamanho do array
    cin >> tam;

    //Criando array e alocando memória
    int* v = (int*) malloc(tam * sizeof(int));
    
    //Inserindo valores no array atráves de um ponteiro
    p = v;
    for(int i = 0;i < tam;i++){
        cin >> aux;
        *p = aux;
        p++;
    }
    
    //Varrendo o array atráves de um ponteiro, e printando na tela
    p = v;
    for(int i = 0; i < tam;i++){
        cout << *p << " ";
        p++;
    }


    return 0;
}