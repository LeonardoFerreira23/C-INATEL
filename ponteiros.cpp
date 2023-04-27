#include <iostream>

using namespace std;

int funcao(){
    int a = 1;
}

int main(){

    int a = 1;

    int *b = &a;

    int c[4] = {5,4,3,2};
    
    b = new int[5];

    b[1] = 78;

    cout << *(b+1) << end;
    
    delete b;
    int x;
    cin >> x;
    b = new int[x];

    delete b;

    return 0;
}