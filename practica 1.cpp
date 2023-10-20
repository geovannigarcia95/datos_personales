#include <iostream>
using namespace std;
main() {
char nombre[20];
char paterno[20];
char materno[20];
char telefono[20];
char sexo[20];
int nac,actual =2022,edad;
cout<< "introduzca su nombre: ";
cin>> nombre;
cout<< "introduzca su apellido paterno: ";
cin>> paterno ;
cout<< "introduzca su apellido materno: ";
cin>> materno ;
cout<< "introduzca su telefono: ";
cin>> telefono ;
cout<< "introduzca su año de nacimiento: ";
cin>> nac ;
edad=actual-nac;
cout<<"hola, tu nombre es : "<<nombre<< " "<<paterno<< "" <<materno<< ""
<<telefono<< endl<< "Y tu edad es: "<<" "<<edad<<endl;
return 0;
}
