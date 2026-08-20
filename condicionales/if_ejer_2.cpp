#include <iostream>
using namespace std;
int main (){
    int calificacion;
    cout<<"Ingresa la nota obtenida en el examen(Del 0 al 10)"<<endl;
    cin>>calificacion;
    if (calificacion>=9){
        cout<<"Excelente"<<endl;
    }else if (calificacion>=7){
        cout<<"Muy buena"<<endl;
    }else if (calificacion>=5){
        cout<<"Aprobado"<<endl;
    }else{
        cout<<"Reprobado"<<endl;
    }
    return 0;
}