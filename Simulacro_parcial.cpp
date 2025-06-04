#include <iostream>
using namespace std;

/* 
  For 3. Sume los primeros n numeros
  while do while 18. 5 intentos para adivinar un numero entre 5 y 50
  switch 9. pide el numero de un mes y muestra cuantos dias tiene
  Arreglos 5. arreglos con n numeros cuantos son pares y cuantos son impares */

int main (){

/*Tarifa de Luz Eléctrica
Calcula la tarifa según el consumo: menor a 100 kWh, tarifa baja; entre 100 y 200 kWh, tarifa media; más de 200 kWh, tarifa alta.*/

int tarifa, consumo = 0; 
int mes, opcion;

cout<< "Bienvenido"<<endl;
cout<< "ingresa el conumo de kWh que has tenido en el mes:";
cin>> consumo; 

if (consumo < 100){

    cout<< "tu Tarifa es baja"<<endl;
}else if (consumo >=100 && consumo <= 200){
    cout<< "Tu tarifa es media"<<endl;
}else{
    cout<< "Tu tarifa es alta"<<endl;
}
    
return 0;

}