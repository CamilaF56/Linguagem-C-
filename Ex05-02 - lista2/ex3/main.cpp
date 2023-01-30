#include <iostream>
#include <fstream>



using namespace std;

struct clientes{
    string ano;
    string nome;
    int idade;
};

int main()
{
    clientes c = {"","",0};

    char* arquivo = "clientes.dat";
    fstream saida;
    saida.open(arquivo, ios::out);

    cout << "Digite o seu nome:"<< endl;
    cin>> c.nome;

    cout<< "Digite a sua idade"<< endl;
    cin>> c.idade;

    if(saida.fail()){
        cout<<"abertura do aqruivo falhou"<<endl;
        exit(1);
    }

    saida.close();

    fstream arq2;

    arq2.open(arquivo,ios::out);

    if(arq2.fail()){
        cout<< "a abertura do arquivo falhou"<<endl;
        exit(1);
    }

    arq2.write((char *) (&c) ,sizeof(clientes));
    while(c.nome==""){
        arq2<<("%s tem %d anos",c.nome,c.idade);
    }


    arq2.close();

    return 0;
}
