#include <iostream>
#include <locale>

using namespace std;

float getTime(float tempo[3]);
float calculaTaxas(float tempo[3], float rate1[3]);
void showResult(float tempo[3], float rate1[3], float tempoT, float rateT);

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float rate1[3], rateT;
    float tempo[3], tempoT;
    char resp;

    do{
        getTime(tempo);
        calculaTaxas(tempo, rate1);
        showResult(tempo, rate1, tempoT, rateT);
        cout << "Outra vez? (s/n)"<< endl;
        cin >> resp;
    }while(resp == 's' || resp == 'S');

    return 0;
}

float getTime(float tempo[3]){
    int x;
    for(int x = 0; x < 3; x++){
        cout << "Digite o tempo do cliente ["<< x+1 <<"] no estacionamento: " << endl;
        cin >> tempo[x];
    }
    return tempo[x];
}


float calculaTaxas(float tempo[3], float rate1[3]){
    int x;

    for(int x = 0; x < 3; x++){
        if(tempo[x] > 3){
            rate1[x] = (tempo[x]-3) * 0.5;
            rate1[x] = rate1[x] + 2;
        }else if(tempo[x] >= 24){
            cout << "você não pode permanecer até esse horário" << endl;
        }else if(tempo[x] <= 3){
            rate1[x] = 2;
            }

        if(rate1[x] > 10){
            rate1[x] = 10;
        }
    }

    return rate1[x];
};

void showResult(float tempo[3], float rate1[3], float tempoT, float rateT){
    int x = 0;
    tempoT = 0;
    rateT = 0;

    for(int x = 0; x < 3; x++){
        tempoT = tempoT +  tempo[x];
        rateT = rateT + rate1[x];
    }

    for(int x = 0; x < 3; x++){
        cout << "Carro ["<< x+1 <<"] : " << tempo[x] <<" horas de permanência, taxa de R$"<< rate1[x] << endl;
    }
    cout << "Total: HORAS["<< tempoT <<"] / TAXAS["<< rateT <<"]"<< endl;
}









