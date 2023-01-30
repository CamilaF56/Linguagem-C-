#include <iostream>

using namespace std;

void calculaMoedas(int valorDaMoeda, int &numero, int &quantiaRestante);

int main() {
  int value1, value2, value3;
  char resp;

  do {
    calculaMoedas(value1, value2, value3);
    cout << "Deseja fazer novamente o calculo? (s/n)" << endl;
    cin >> resp;
  } while (resp == 's' || resp == 'S');
}

void calculaMoedas(int valorDaMoeda, int &numero, int &quantiaRestante) {
  int resultMax, result10, resultMin, resto, restoM;

  if (quantiaRestante >= 0 && quantiaRestante < 100) {
    cout << "Digite o valor da quantia restante do troco" << endl;
    cin >> quantiaRestante;
  }

  if (valorDaMoeda == 1 || valorDaMoeda == 10 || valorDaMoeda == 25) {
    cout << "Digite o valor maximo da moeda que deseja receber o seu troco < "
            "25 = máx / 10 / 1 = min "
         << endl;
    cin >> valorDaMoeda;
  } else {
    cout << "Não trabalhamos com esse valor de moeda" << endl;
  }

  resultMax = quantiaRestante / valorDaMoeda; // numero de 25
  restoM = (resultMax * valorDaMoeda);        // numero vezes 25
  resto = (quantiaRestante - restoM); // quanto falta pra o resto, 25 já foi
  result10 = resto / 10;              // numero de 10
  resultMin = quantiaRestante - ((result10 * 10) + restoM); // numero de 1

  cout << quantiaRestante << " centavos podem ser fornecido em " << resultMax
       << " de " << valorDaMoeda << " centavos, " << result10
       << " de 10 centavos e " << resultMin << " de 1 centavo." << endl;
}

