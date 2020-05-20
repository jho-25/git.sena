#include<iostream>
#include<math.h>
using namespace std;
             //7
          

main()
{
	                       cout<<"    unidad de brocha =200 $   "<<endl;
                           cout<<"    unidad de rodillo =400 $   "<<endl;
                           cout<<"    unidad de sellador =500 $  "<<endl;

float a,b,c,d,e,f,g,h,i,cont;
cout<<" ingrese la cantidad de brochas "<<endl;
cin>>a;
cout<<" ingrese la cantidad de rodillos "<<endl;
cin>>b;
cout<<" ingrese la cantidad de sellador "<<endl;
cin>>c;
f=500;
d=(a*200)-(20*a*200)/100;
e=(b*400)-(15*b*400)/100;
g=(f*c);
cont=(d+e+g);
h=(0.07*cont);
i=cont-h;
	
cout<<" \nprecio de las brochas con descuento del 20% "<<" "<<d<<" cantidad pedidad"<<" "<<a<<endl;
cout<<" \nprecio de los rodillos con descuento del 15% "<<" "<<e<<" cantidad pedidad"<<" "<<b<<endl;
cout<<" \nprecio unitario sellador "<<" "<<f<<"$"<<" cantidad pedida "<<c<<" unidades"<<endl;
cout<<" \nprecio total de contado con el 7% de descuento "<<i<<endl;
cout<<" \nprec
io  total sin descuento  "<<cont<<endl;










}
