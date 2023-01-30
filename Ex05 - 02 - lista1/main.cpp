#include <iostream>

using namespace std;

void cels(float cel, float far);
void farh(float cel, float far);

int main()
{
    float cel, far;

    cels(cel, far);
    farh(cel, far);

    //Celsius
    for(int x = 0; x < 100 ; x++){
        float cel;
        cels(cel, x);
    }

    return 0;
}

void cels(float cel, float far){
    cel = (far - 32) / 1.8;
    cout << "O valor da temperatura digitada equivale a "<< cel <<" Fahrenheit's\n"<< endl;
}

void farh(float cel, float far){
    far = (cel + 32) * 1.8;
    cout << "O valor da temperatura digitada equivale a "<< far <<" Celsius\n"<< endl;
}
