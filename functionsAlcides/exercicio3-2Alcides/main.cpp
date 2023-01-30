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
        cout << "Digite a capacidade máxima do local:" << endl;
        cin >> capMax;
        cout << "Digite o número de pessoas que comparecerão ao local" << endl;
        cin >> numPess;
    }

// function deployment and showResult
    void deployment(int& capMax, int& numPess, int& result){
        result = capMax - numPess;
        if(numPess > capMax){
            cout << "A conferência não poderá ocorrer, terá que excluir " << -result << " pessoas"<< endl;
        }else{
            cout << "A conferência poderá ocorrer, pois está de acordo com as normas legais e " << numPess << " comparecerão" << endl;
        }
    }

