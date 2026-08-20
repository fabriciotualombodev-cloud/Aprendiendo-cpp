#include <iostream>
#include <windows.h>
using namespace std;

int main (){
    SetConsoleOutputCP(CP_UTF8);
    int year;
    cout<<"Ingresa un año para saber si es bisiesto o no"<<endl;
    cin>>year;
 if ((year%4==0 && year%100!=0)||year%400==0){
 cout<<"Es bisiesto"<<endl;
 } else {
    cout<<"No es bisiesto"<<endl;
 }
    return 0;
}