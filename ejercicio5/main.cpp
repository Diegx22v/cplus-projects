#include <iostream>

using namespace std;

int main (){

int res,numeros,tare,resu,a,b,c;

cout << "escriba las notas " << endl;

cin >>a;
cin >>b;
cin >>c;

res = (a)0.60;

numeros = (b)0.20;

tare = (c)*0.20;

resu = (tare + res + numeros);

cout << "tu nota es " << resu << endl;

if (resu >= 100)
{

    cout << "pasaste con honores con "<<resu;

}
else if (resu <= 0)
{

    cout << "te quedaste de grado crack "<<resu;

}
else{

    cout << "mediana mente aceptable "<<resu;

}

}
