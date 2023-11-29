#include <iostream>
#include "string" //Necesario para el manejo de texto de impresion a pantalla

using namespace std;  //Necesario para el manejo de texto de impresion a pantalla

int main() {
    double a,b,c,max,min, promedio; //Declaración de variables

    printf("Ingrese Edad 1:\n"); //Se pide el ingreso Edad 1 al usuario
    scanf("%lf", &a); //Se lee y guarda en variable a el numero ingresado
    
    printf("Ingrese Edad 2:\n"); //Se pide el ingreso Edad 2 al usuario
    scanf("%lf", &b); //Se lee y guarda en variable b el numero ingresado
    
    printf("Ingrese Edad 3:\n");//Se pide el ingreso Edad 3 al usuario
    scanf("%lf", &c); //Se lee y guarda en variable c el numero ingresado

    promedio= ((a+b+c)/3); //Se Realiza la suma de todas las notas y calcula el promedio final.
    
    max = a;

    if(b>max){
        max=b;        
    }

    if(c>max){
        max=c;        
    }

    min = a;

    if(b<min){
        min=b;        
    }

    if(c<min){
        min=c;        
    }

    cout << "El promedio de edades es: " << promedio << "\n";         
    cout << "La Mayor de todas es: " << max << " Años \n";
    cout << "La Menor de todas es: " << min << " Años \n";
}