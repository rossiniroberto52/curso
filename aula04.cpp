#include <iostream>

using namespace std;

int main(){
        int vidas = 5;
        char letra = 'a';
        double decimal = 0.58765769390381; //2.88888888889
        float decimal2 = 1.58765769390381; // 2.5
        bool vivo = true;
        string nome = "rossini";

        cout << "digite o num de vidas: ";
        cin >> vidas;
        cout << "Digite uma letra: ";
        cin >> letra;
        cout << "Dinheiro: ";
        cin >> decimal;
        cout << "Digite seu nome: ";
        cin >> nome;

        cout << vidas << "\n" << letra << "\n" << decimal << "\n" << decimal2 << "\n" << vivo << "\n" << nome << "\n";

        return 0;
}
