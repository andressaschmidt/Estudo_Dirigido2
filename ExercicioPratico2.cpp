#include<iostream>

using namespace std;

int soma(int n1, int n2){
    return n1 + n2;
}

int main(){
    int n1, n2;
    cout << "digite dois numeros inteiros:" << endl;
    cin >> n1 >> n2;
    cout << soma(n1, n2);

    return 0;
}
