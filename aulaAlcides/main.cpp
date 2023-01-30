#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

void Calc(float& base, float& altura);
void Calc(float& base);
void Calc(float& base, float& altura, float& basezinha);
void Calc(double& raio);

int main()
{
    setlocale(LC_ALL,"Portuguese");

    char op;
    float base, altura, basezinha;
    double raio;

    cout << "\n\tMenu para calcular\n\n 1- Triângulo\n 2- Quadrado\n 3- Trapézio\n 4- Círculo\n 5- Losango" << endl;
    cin >> op;

    do{
        switch(op){
            case '1': Calc (base, altura);
                break;

            case '2': Calc (base);
                break;

            case '3': Calc (base,altura,basezinha);
                break;

            case '4': Calc (raio);
                break;

            case '5': Calc (base, altura);
                break;

            default:
                return 0;
        };
    }while(op <= 1 || op <= 5);

    return 0;
}

// Functions

// Triângulo e Losango
void Calc (float& base, float& altura){
    float result;
    cout << "Digite o valor da base:" << endl;
    cin >> base;
    cout << "Digite o valor da altura:" << endl;
    cin >> altura;
    result = (base*altura)/2;
    cout << "O resultado é : " << result << endl;
}

// Quadrado
void Calc (float& base){
    float result;
    cout << "Digite o valor do lado do quadrado:" << endl;
    cin >> base;
    result = pow(base,2);
    cout << "O resultado é : " << result << endl;
}

// Trapézio
void Calc (float& base, float& altura, float& basezinha){
    float result;
    cout << "Digite o valor da base maior do trapezio:" << endl;
    cin >> base;
    cout << "Digite o valor da menor:" << endl;
    cin >> basezinha;
    cout << "Digite o valor da altura:" << endl;
    cin >> altura;
    result = ((base+basezinha)/2)*altura;
    cout << "O resultado é : " << result << endl;
}

// Círculo
void Calc (double& raio){
    float result;
    cout << "Digite o valor do raio:" << endl;
    cin >> raio;
    result = pow(raio,2)*3.14;
    cout << "O resultado é : " << result << endl;
}

