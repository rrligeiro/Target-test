#include <iostream>

using namespace std;

int main(){
    
    int t1 = 0, t2 = 1, nextTerm = 0, number;
    
    cout << "Digite um numero para verificar se ele pertence a sequencia de fibonacci: " << endl;
    cin >> number;
    
    nextTerm = t1 + t2;
    
    while(nextTerm <= number){
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    
    if (number == nextTerm || number == t2 || number == t1){
        cout << "O numero pertence a sequencia de fibonacci" << endl;
    } else {
        cout << "O numero nao pertence a sequencia de fibonacci" << endl;
    }
}
