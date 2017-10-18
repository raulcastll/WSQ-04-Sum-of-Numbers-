#include <iostream>
using namespace std;

int valto, vbajo, respaldo, resultado;

int main()
{
cout<<"Este programa realizará la suma de todos los numeros enteros que se"<<endl;
cout<<"encuentren entre los valores que le des, incluyendo los valores que tu"<<endl;
cout<<"especifiques"<<endl;
cout<<"Dame el valor mas bajo"<<endl;
cin>>vbajo;
cout<<"Dame el valor alto"<<endl;
cin>>valto;

if (valto<vbajo) {
    respaldo=vbajo;
    vbajo=valto;
    valto=respaldo;
    cout << "Estas medio tonto, pusiste los valores al revés, pero ya lo corregí" << endl;
}
/*
cout<<valto<<endl;
cout<<vbajo<<endl;
*/
do {
      resultado=resultado+vbajo;
      vbajo=vbajo+1;
        } while(valto>=vbajo);
/*
if (valto==valto) {
  resultado=valto+vbajo;
  vbajo=vbajo+1;
}*/

cout<<"El valor de la suma de los numeros que se encuentran entre "<<endl;
cout<<"los numeros que me diste es igual a: "<<resultado<<endl;





return 0;
}
