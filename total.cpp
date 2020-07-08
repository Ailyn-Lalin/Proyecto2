#include <iostream>
#include <string>
using namespace std;
int main (){
int factura ,codigoproducto, cantidaddetalles=0;
double precio,cantidad,subtotaldetalle=0, subtotal=0, descuento=0, isv=0, totalpagar=0;
string cliente,producto;
const double PORCENTAJEDESCUENTO=0.05;
const double PORCENTAJEISV      =0.15;
cout <<"Introduzca la factura";
cin >>factura;

cout <<"Introduzca el cliente";
cin>>cliente;
cout <<"Introduzca el cliente";
cin>>cliente;
cout <<"cuantos productos lleva";
cin >>cantidaddetalles;
for (int i=0; i <cantidaddetalles; i++)
{
 cout <<"Introduzca el codigo del producto";
 cin >>codigoproducto;
 cout <<"introduzaca el producto";
 cin>>producto;
 cout <<"introduzca la cantidad";
 cin >>cantidad;
 cout <<"introduza el precio";
 cin >>precio;
 subtotaldetalle= (cantidad * precio);
 cout <<"El subtotal del detalle es:" <<subtotaldetalle <<endl;
 subtotal += subtotaldetalle;
 //subtotal= subtotal + subtotaldetalle;
}
descuento =subtotal * PORCENTAJEDESCUENTO;
isv       =subtotal * PORCENTAJEISV;
totalpagar=subtotal -descuento + isv;
cout << "El subtotal es:" <<subtotal <<endl;
cout <<"El descuento es:" <<descuento <<endl;
cout << "El isv es:" <<isv <<endl;
cout << "El total a pagar es:" <<totalpagar <<endl;
return 0;
}
