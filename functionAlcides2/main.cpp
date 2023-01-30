#include <iostream>

using namespace std;

double getPreco();
int getN();
double custoTotal(int nParametro, double precoParametro);
void showResult(int n, double preco, double res);


int main(void){
    double preco = getPreco(), res;
    int n = getN();
    res = custoTotal(n, preco);
    showResult(n, preco, res);

    return 0;
}


int getN(){
    int n;
    cout << "Informe o Numero de Itens Adquiridos: ";
    cin >> n;
    return n;
};

double getPreco(){
    double preco;
    cout << "Entre com o Preco de Cada Item R$ ";
    cin >> preco;
    return preco;
};

double custoTotal(int nParametro, double precoParametro){
    double subtotal = precoParametro * nParametro;
    return subtotal;
}

void showResult(int n, double preco, double res){
    cout << n << " itens a R$ " << preco << " cada.\n" << "Preco Total e R$ " << res;
}


