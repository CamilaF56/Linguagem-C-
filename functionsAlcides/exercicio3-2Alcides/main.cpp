#include <iostream>
#include <locale>

using namespace std;

void getDados(int& capMax, int& numPess);
void deployment(int& capMax, int& numPess, int& result);

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int value1, value2, value3;

    getDados(value1, value2);
    deployment(value1, value2, value3);

    return 0;
}


// function getDados
    void getDados(int& capMax, int& numPess){
        cout << "Digite a capacidade m�xima do local:" << endl;
        cin >> capMax;
        cout << "Digite o n�mero de pessoas que comparecer�o ao local" << endl;
        cin >> numPess;
    }

// function deployment and showResult
    void deployment(int& capMax, int& numPess, int& result){
        result = capMax - numPess;
        if(numPess > capMax){
            cout << "A confer�ncia n�o poder� ocorrer, ter� que excluir " << -result << " pessoas"<< endl;
        }else{
            cout << "A confer�ncia poder� ocorrer, pois est� de acordo com as normas legais e " << numPess << " comparecer�o" << endl;
        }
    }

