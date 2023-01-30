#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

void saida()

int main()
{
    setlocale(LC_ALL,"Portuguese");

    string op;

    cout << "Digite o seu nome:" << endl;
    cin >> op;

    saida();

    return 0;
}

void saida(){

    int num;

    cout << "Digite '9' para sair" << endl;
    cin >> num;

    if(num == 9){
        return exit(1);
    }else{
        cout("Não foi possível identificar o número que solicitado");
    };

}
