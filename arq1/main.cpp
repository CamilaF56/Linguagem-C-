#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream arq, arq2;

    arq.open("namesUFS.txt", ios::in);
    arq2.open("namesUFS2.txt", ios::out);

    string s;

    if(arq.is_open()){
        cout << "O arquivo pra leitura foi aberto" << endl;
    }

    if(arq2.is_open()){
        cout << "O arquivo de gravacao foi aberto" << endl;
    }

    while(getline(arq,s)){
        arq2 << s << endl;
    }

    cout << "gravou" << endl;

    arq.close();
    arq2.close();

    if(!arq.is_open()){
        cout << "O arquivo de leitura foi fechado" << endl;
    }

    if(!arq2.is_open()){
        cout << "O arquivo de gravacao foi fechado" << endl;
    }

    return 0;
}
