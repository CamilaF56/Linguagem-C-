#include <iostream>
#include <fstream>

using namespace std;

struct pessoas{
int idade;
string ano;
string nome;
};

int main()
{

    fstream saida;

    char* arquivo = "meuarquivo.dat";

    saida.open(arquivo, ios::out);

    if(saida.fail()){
        cout<< "a abertura do arquivo falhou"<< endl;
        exit(1);
    }

    pessoas c = {0, "",""};

    if(saida.write((char *) (&c), sizeof(pessoas))){
    cout<< "digite a sua idade" << endl;
    cin >> c.idade;
    cout<< "digite o seu ano de nascimento" << endl;
    cin>> c.ano;
    cout<< "digite o seu nome" << endl;
    cin>> c.nome;
    }


    saida.close()
    return 0;
}
