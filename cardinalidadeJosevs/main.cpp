#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL,"Portuguese");
  cout << "\t\t\tCardinalidade de conjuntos não disjuntos com dois conjuntos\n" << endl;

  int p1, p2, a[p1], b[p2], card, aux1, aux2, x = 0, resp1, resp2, y = 0, n = 0;

  do{
    cout << "Digite um número para colocar dentro do primeiro conjunto" << endl;
    cin >> (a[x]);
    x++;
    aux1 = a[x-1];

    cout << "Deseja adicionar mais um número ao conjunto? < S = sim >" << endl;
    cin >> resp1;
    if(resp1 == 's' || resp1 == 'S'){
      p1++;
      break;
    };
  }while(x < p1);


  do{
    cout << "Digite um número para colocar dentro do segundo conjunto" << endl;
    cin >> (b[y]);
    y++;
    aux2 = b[y-1];

    cout << "Deseja adicionar mais um número ao conjunto? < S = sim >" << endl;
    cin >> resp2;
    if(resp2 == 's' || resp2 == 'S'){
      p2++;
      break;
      };
    }while(y < p2);

  for(x=0; x < p1 ;x++){
        for(y=0;y < p2;y++){
            if(a[x] != b[y]){
                n++;
            };
        }
    };


    card = (p1 + p2) - n;

    cout << "A cardinalidade dos conjuntos não disjuntos é de " << card << endl;

}
