#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

void getDados(double& qtt, double& pesoR, double& pesoP);

void deployment(double& qtt, double& pesoR, double& pesoP, double& result);

void showResult(double& result);

int main(){
    setlocale(LC_ALL,"Portuguese");

    double value1,value2,value3,value4;

    getDados(value1, value2, value3);
    deployment(value1, value2, value3, value4);
    showResult(value4);

    return 0;
}

// function getDados
    void getDados(double& qtt, double& pesoR, double& pesoP){
        cout << "Digite a quantidade de adoçante artificial para matar um rato, em gramas" << endl;
        cin >> qtt;
        cout << "Digite o peso do rato, em quilo" << endl;
        cin >> pesoR;
        cout << "Digite o peso da pessoa, em quilo" << endl;
        cin >> pesoP;
    }
// function deployment
    void deployment(double& qtt, double& pesoR, double& pesoP, double& result){
        qtt = qtt/1.000;
        const double ado = 0.001;
        double dpsA = (qtt * ado)/100;
        result = (dpsA * pesoP)/pesoR;
        result = result * 100; // porcentagem
    }

// function showResult
    void showResult(double& result){
        cout << "A porcentagem de adoçante artificial no refrigerante dietético é de " << result << setprecision(2) <<"%" << endl;
    }
