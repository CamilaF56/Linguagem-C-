#include <iostream>

using namespace std;

void calcy(double x, double w, double& yp);
void calcy(int a, int b, int c, int d, int e, int f, int& y);

int main()
{
    double value1, value2, yp;
    int valor1, valor2, valor3, valor4, valor5, valor6, valor7;

    cout<< "digite o valor de x "<<endl;
    cin >>value1;
    cout<< "digite o valor de w "<<endl;
    cin>> value2;
    calcy(value1, value2, yp);

    cout<< yp<<endl;

    cout<< "digite o valor de a "<<endl;
    cin >>valor1;
    cout<< "digite o valor de b "<<endl;
    cin>> valor2;
    cout<< "digite o valor de c "<<endl;
    cin >>valor3;
    cout<< "digite o valor de d "<<endl;
    cin>> valor4;
    cout<< "digite o valor de e "<<endl;
    cin >>valor5;
    cout<< "digite o valor de f "<<endl;
    cin>> valor6;
    calcy(valor1,valor2,valor3,valor4,valor5,valor6,valor7);

    cout<< valor7<<endl;

    return 0;
}

void calcy(double x, double w, double& yp){
	yp = (2*x)-(3*x);
	yp = yp/2;
	yp = yp + (w+1);
	yp = yp/x;
	yp= yp/2;
}

void calcy(int a, int b, int c, int d, int e, int f, int& y){
	y = (b/c);
	y = a+y;
	int p = (e/f);
	p = d+p;
	y = y/p;
}

