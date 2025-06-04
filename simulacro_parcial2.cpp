#include <iostream>
using namespace std;

int main (){
/* Días en un Mes
Pide el número de un mes y muestra cuántos días tiene.*/
int mes;
cout<< "Hola de nuevo"<<endl;
cout<< "Digita un numero que este entre el 1 y el 12:"<<endl;
cin >>mes;

switch(mes){
        case 1:
        cout<<"31"<<endl;
         case 2:
        cout<<"28"<<endl;
         case 3:
        cout<<"31"<<endl;
         case 4:
        cout<<"30"<<endl;
        case 5:
        cout<<"31"<<endl;
        case 6:
        cout<<"30"<<endl;
        case 7:
        cout<<"31"<<endl;
        case 8:
        cout<<"31"<<endl;
        case 9:
        cout<<"30"<<endl;
        case 10:
        cout<<"31"<<endl;
        case 11:
        cout<<"31"<<endl;
        case 12:
        cout<<"31"<<endl;
        default:
        cout<< "Numero erroneo";
        break;
    }

    return 0;
}