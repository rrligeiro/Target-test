#include <iostream>

using namespace std;

void reverseString(string& string){
    
    for (int i = string.length() - 1; i >= 0; i--){
        cout << string[i];
    }
}

int main(){
    
    string string = "Mereco ser aprovado :D";
    reverseString(string);

    return 0;
}
