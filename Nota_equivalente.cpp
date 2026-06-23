#include <iostream>       
#include <locale.h>
using namespace std;

float escala_de_calificacion, nota, nota_equivalente;       

int main() {              
setlocale(LC_ALL, "Spanish");

   cout << "Ingresa la escala de la calificación (Ej: 2o)"<< endl;
   cin >> escala_de_calificacion;

     cout << "Ingresa tu nota"<< endl;
   cin >> nota;
   
   nota_equivalente = (nota*10 )/escala_de_calificacion;
   cout <<"Tu nota es: "<< nota_equivalente;
    return 0;  
	         
}                  