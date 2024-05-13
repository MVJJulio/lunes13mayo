#include<iostream>
using namespace std;
int main(){
    int nivel;
    cout<<"A que nivel le gustaria ir: ";
    cin>>nivel;
    if (nivel==1){
        cout<<"Subir\n";
    } else if (nivel>=2 && nivel<=24){
        cout<<"Subir o bajar\n";
    } else if (nivel==25){
        cout<<"Bajar\n";
    } else{
        cout<<"No existe tal nivel\n";
    }
    

    return 0;
}