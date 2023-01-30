#include <iostream>
#include <cmath>

using namespace std;

void bhaskara(int a, int b, int c, double& x1, double& x2);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a, b,c;
    double x1, x2;
    bhaskara(a, b,c, x1, x2);

    cout<< "o resultado de x1 é "<<x1<<endl;
    cout<< "o resultado de x2 é "<<x2<<endl;

    return 0;
}
void bhaskara(int a, int b, int c, double& x1, double& x2){
	cout<< "digite o valor do coeficiente a"<<endl;
	cin >> a;
	cout<< "digite o valor do coeficiente b"<<endl;
	cin >> b;
	cout<< "digite o valor do coeficiente c"<<endl;
	cin >> c;
	if(c==0){
		int delta = (b*b) - (4*a);
		x1 = (b*-1) + sqrt(delta);
		x1 = x1/(2*a);
		x2 = (b*-1) - sqrt(delta);
		x2 = x2/(2*a);
	}else{
        int delta = (b*b) - (4*a*c);
        x1 = (b*-1) + sqrt(delta);
        x1 = x1/(2*a);
        x2 = (b*-1) - sqrt(delta);
        x2 = x2/(2*a);
	}


}
