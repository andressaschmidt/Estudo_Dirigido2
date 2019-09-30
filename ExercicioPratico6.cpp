#include <iostream>
#include <vector>

using namespace std;

int main () {

    int contador = 0;
    string resposta;
    vector<string> respostas;
    vector<string> perguntas;

    setlocale(LC_ALL, "portuguese");

    perguntas.push_back("Voc� telefonou para a v�tima?");
    perguntas.push_back("Voc� esteve no local do crime?");
    perguntas.push_back("Voc� mora perto da v�tima?");
    perguntas.push_back("Voc� devia para a v�tima?");
    perguntas.push_back("Voc� j� trabalhou com a v�tima?");

    for (string na:perguntas){
        cout << na << endl;
    }

    cout << "QUESTION�RIO INVESTIGAT�RIO\n\n Responda as seguintes perguntas com sim ou n�o:\n";

    for (string per:perguntas){
        cout << per << endl;
        cin >> resposta;
        cout << endl;
        respostas.push_back(resposta);
        }

    for (string resp:respostas){
        if (resp == "sim") {
            contador = contador + 1;
        }
    }

    if (contador == 2){
        cout << "Voc� � considerado suspeito do assasinato!";
    }

    if (contador == 3 || contador == 4){
        cout << "Voc� � considerado c�mplice do assasinato!";
    }

    if (contador == 5){
        cout << "Voc� foi julagado como o assasino!";
    }

    else (contador == 0 || contador == 1){
        cout << "Voc� foi inocentado!";
    }

return 0;

}
