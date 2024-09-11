#include <iostream>
#include<string>
using namespace std;
// ! declaramos la funcion puede ser void para no retornar nada, o de algun otro tipo de dato para retornar algo
bool espar(int n);
int main(){
    int n;
    cout <<"ingrese un numero"<<endl;
    cin>>n;
    if( espar(n) ){ cout<<"el numero es par"<<endl; }
    else{ cout<<"el numero es impar"<<endl; }
    return 0;
}
bool espar(int n){
    if( n%2==0 ){ return true; }
    else{ return false; }
}
