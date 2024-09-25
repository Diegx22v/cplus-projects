#include <iostream>
#include <string>
using namespace std;
int main(){
    string destino[] = {"nacional","internacional"}; string mostrar="";
    short v_kilo,op;
    float peso,subtotal,total,iva,recargo; 

    cout <<"ingrese 1 por envio nacional y dos por internacional"<<endl;
    cin>>op;
    
    switch (op){
    case 1: mostrar = destino[0]; v_kilo = 5; break;
    case 2: mostrar = destino[1]; v_kilo = 10; break;
    default: return 0; }
    cout<<"ingrese el peso del paquete"<<endl;
    cin >> peso;

    subtotal = peso*v_kilo ;
    iva = 1.15f;
    recargo = (peso>20) ? 1.15f : 0;
    total = (recargo>0.1f) ? recargo*(subtotal*iva) : (subtotal*iva); 

    cout << "total a pagar: "<<total<<endl;
    return 0;
}