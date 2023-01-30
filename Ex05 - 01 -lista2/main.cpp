#include <iostream>
#include <cmath>

using namespace std;

void calc(float a, float b, float c, float& semi, float& area);

int main()
{
    float a,b,c,semi,area;

    calc(a,b,c,semi,area);

    printf("o valor da area e de : %.2f", area);

    return 0;
}

void calc(float a, float b, float c, float& semi, float& area){
    float soma = 0;
    cout << "Digite o valor de um dos lado" << endl;
    cin >> a;

    cout << "Digite o valor de um dos lado" << endl;
    cin >> b;

    cout << "Digite o valor de um dos lado" << endl;
    cin >> c;

    semi = (a+b+c)/2;
    area = sqrt(semi*(semi-a)*(semi-b)*(semi-c));
}
