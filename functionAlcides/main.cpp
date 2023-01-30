#include <iostream>
#include <cstdlib>

using namespace std;

string completo(string name, string lastName);

int main()
{
    string nome, sobrenome;

    cout << "Digite o seu nome" << endl;
    cin >> nome;
    cout << "Digite o seu sobrenome" << endl;
    cin >> sobrenome;

    completo(nome, sobrenome);

    return 0;
}

string completo(string name, string lastName){
        cout << name << " " << lastName << endl;
};
