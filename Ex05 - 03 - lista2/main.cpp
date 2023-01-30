#include <iostream>

using namespace std;

int input(int& horas, int& minu);
int convert(int& horas, int& minu, char& aux);
void display(int& horas, int& minu, char& aux);

int main()
{
    int horas, minu;
    char aux, resp;

    do{

    input(horas, minu);
    convert(horas, minu, aux);
    display(horas, minu, aux);

    cout << "Deseja repetir o calculo?" << endl;
    cin >> resp;

    }while(resp == 's'|| resp == 'S');


    return 0;
}

// Função entrada
int input(int& horas, int& minu){
    cout << "Digite as horas" << endl;
    cin >> horas;
    cout << "Digite os minutos" << endl;
    cin >> minu;
}

// Função conversão
int convert(int& horas, int& minu, char& aux){
    aux = 'P';
    if(horas == 13){
        horas = 1;
    }else if(horas == 14){
        horas = 2;
    }else if(horas == 15){
        horas = 3;
    }else if(horas == 16){
        horas = 4;
    }else if(horas == 17){
        horas = 5;
    }else if(horas == 18){
        horas = 6;
    }else if(horas == 19){
        horas = 7;
    }else if(horas == 20){
        horas = 8;
    }else if(horas == 21){
        horas = 9;
    }else if(horas == 22){
        horas = 10;
    }else if(horas == 23){
        horas = 11;
    }else if(horas == 24 || horas == 00){
        horas = 12;
    }else{
        aux = 'A';
    }
}

// Função saída
void display(int& horas, int& minu, char& aux){
    cout << horas<<":"<< minu << aux<< endl;
}
