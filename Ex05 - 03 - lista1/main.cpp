#include <iostream>

using namespace std;

float time1(float horas, float minu, float seg, float tempo1);
float time2(float horas, float minu, float seg, float tempo1, float tempo2);

int main()
{
    float horas, minu, seg, tempo1, tempo2;

    cout << "Digite o valor da hora" << endl;
    cin >> horas;
    cout << "Digite o valor dos minutos" << endl;
    cin >> minu;
    cout << "Digite o valor dos segundos" << endl;
    cin >> seg;
    tempo1 = time1(horas,minu,seg,tempo1);

    cout << "Digite o valor da hora" << endl;
    cin >> horas;
    cout << "Digite o valor dos minutos" << endl;
    cin >> minu;
    cout << "Digite o valor dos segundos" << endl;
    cin >> seg;
    time2(horas, minu,seg,tempo1 , tempo2);

    return 0;
}

// Total em segundos
float time1(float horas, float minu, float seg, float tempo1){
    int x;
    float horast, minut;

    horast = (horas*3600.00);
    minut = (minu*24.00);

    tempo1 = (horast+minut+seg);

    cout << "tempo total em segundo:" << tempo1 << endl;
    return tempo1;

}

float time2(float horas, float minu, float seg,float tempo1, float tempo2){
    float horast, minut, resulta;

    horast = (horas*3600.00);
    minut = (minu*24.00);

    tempo2 = (horast+minut+seg);

    cout << "tempo total em segundo:" << tempo2 << endl;

    if(tempo1 > tempo2){
        resulta = (tempo1 - tempo2);
    }else{
        resulta = (tempo2 - tempo1);
    }
    cout << "A diferença dos horarios em segundos:  " << resulta << endl;

}




