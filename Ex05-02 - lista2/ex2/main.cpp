#include <iostream>
#include <fstream>

using namespace std;

 // primeira parte

int main()
{
    fstream saida;

    saida.open("meuarq.txt", ios::out | ios:: trunc);

    if(saida.is_open()){
        cout << "O arquivo foi aberto com sucesso" <<endl;
    }


    saida << "renne talvez n preste também" << endl;


    saida.close();

    if(!saida.is_open()){
        cout<< "O arquivo foi fechado com sucesso"<< endl;
    }

    return 0;
}

//terceira parte
int main(){

fstream doc;

doc.open("doc.txt", ios::out| ios::trunc);

if(doc.is_open()){
    cout<<"O arquivo foi aberto comm sucesso"<<endl;
}

string var;
char s= 's';
while( s=='s'||s == 'S'){
cout<< "Digite o que deseja adicionar ao arquivo uma palavra por vez"<<endl;
cin >> var;
doc << var<<endl;
cout << "deseja continuar?"<<endl;
cin >> s;
}

doc.close();

if(!doc.is_open()){
    cout<<"O arquivo foi fechado comm sucesso"<<endl;
}

doc.open("doc.txt", ios::in);

if(doc.is_open()){
    cout<<"O arquivo foi aberto comm sucesso"<<endl;
}

while(getline(doc,var)){
    cout<<var<<endl;
}

if(!doc.is_open()){
    cout<<"O arquivo foi fechado comm sucesso"<<endl;
}

}
