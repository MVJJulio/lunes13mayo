#include<iostream>
using namespace std;
int main(){
    char letra(1);
    int n1,n2;
    cout<<"     Menu    \n";
    cout<<"Opciones:\n";
    cout<<"A- Suma\nB-Resta\nC-Multiplicacion\nD-Division\nE-Saber si es par o impar\n";
    cin>>letra;
    switch (letra){
    case 'A':
        cout<<"Digite 2 numeros: ";
        cin>>n1;
        cin>>n2;
        cout<<"La suma es: "<<n1+n2;
        break;
    case 'B':
        cout<<"Digite 2 numeros: ";
        cin>>n1;
        cin>>n2;
        cout<<"La resta es: "<<n1-n2;
        break;
    case 'C':
        cout<<"Digite 2 numeros: ";
        cin>>n1;
        cin>>n2;
        cout<<"La multiplicacion es: "<<n1*n2;
        break;
    case 'D':
        cout<<"Digite 2 numeros: ";
        cin>>n1;
        cin>>n2;
        cout<<"La division es: "<<n1/n2;
        break;
    case 'E':
        cout<<"Ingrese un numero: "; cin>>n1;
        if (n1==0){
        cout<<"Su numero es 0 \n";
        }else if (n1%2==0){
        cout<<"Su numero es par\n";
        }else{
        cout<<"Su numero es impar\n";
    }
        break;
    default:
        cout<<"Letra no valida";
        break;
    }

    return 0;
}