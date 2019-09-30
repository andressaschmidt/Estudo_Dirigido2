#include<iostream>

using namespace std;

int soma2(int n1, int n2, int n3){
    return n1 + n2 + n3;
}

int main(){
    int n1, n2, n3;
    cout << "digite tres numeros inteiros:" << endl;
    cin >> n1 >> n2 >> n3;
    cout << soma2(n1, n2, n3);

    return 0;
}
