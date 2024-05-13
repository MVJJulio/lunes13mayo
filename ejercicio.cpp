#include<iostream>
#include<string>
using namespace std;
int main(){
    string nombre; //nombre de la persona
    int horas; // horas trabajadas
    float impuesto, impuesto2; //Los impuestos
    float salario; // salario sin impuesto
    float salario_neto; //salario con impuesto
    cout<<"Escriba el nombre del empleado: ";
    cin>>nombre;
    cout<<"Digite el numero de horas trabajadas: ";
    cin>>horas;
    if (horas<=160){ // si es menor de 160 tampoco tiene impuesto
        salario_neto=horas*10;
        cout<<nombre<<" tiene un salario de neto de: "<<salario_neto<<endl;
    }
    else if(horas>=160){ // si es mayor de 160 
        salario=(horas*10)*1.5; // mas horas extras
        if (salario>=2000 && salario<=2200){ //Funciones de impuesto
            impuesto=salario*0.20;
            salario_neto=salario-impuesto;//calcular salario con impuesto
            cout<<nombre<<" tiene un salario de neto de: "<<salario_neto<<endl;
        }else if (salario>=2201){ //segunda funcion de impuesto
            impuesto2=salario*0.30;
            salario_neto=salario-impuesto2;//calcular salario con impuesto
            cout<<nombre<<" tiene un salario de neto de: "<<salario_neto<<endl;
        }
    }

    return 0;
}