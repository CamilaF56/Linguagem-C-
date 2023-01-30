#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int soma(int n1, int n2);

int main(void)
{
    setlocale(LC_ALL,"Portuguese");

    int n1, n2;

    cout << "Hello world!\n" << endl;

    cout << "Digite o primeiro número:" << endl;
    cin >> n1;

    cout << "Digite o segundo número:" << endl;
    cin >> n2;

    int res = soma(n1, n2);

    cout << "A soma foi de " << res;

    return 0;
}
int soma(int n1, int n2){

    int somar = n1 + n2;

    return somar;
}
