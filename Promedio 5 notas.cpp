#include <iostream>       
#include <locale.h>
using namespace std;

float nota_1, nota_2,nota_3,nota_4,nota_5, promedio;       

int main() {              
setlocale(LC_ALL, "Spanish");

   cout << "Ingresa nota 1"<< endl;
   cin >> nota_1;
    
   cout << "Ingresa nota 2"<< endl;
   cin >> nota_2;
     
   cout << "Ingresa nota 3"<< endl;
   cin >> nota_3;
   
   cout << "Ingresa nota 4"<< endl;
   cin >> nota_4;
   
   cout << "Ingresa nota 5"<< endl;
   cin >> nota_5;
   
   promedio = (nota_1 + nota_2+nota_3+nota_4 + nota_5 )/10;
   cout <<"Tu promedio es: "<< promedio;
    return 0;  
	         
}                   
    


