#include<iostream>
using namespace std;


main()
{
	
	float a,total,b; 
	char oprima;
	
	do
	{      cout<<"*************EJERCICIO DE GIT*****************\n ";
     
	 cout<<"\ningrese un numero deciaml \n";
     cin>>a;
     total=a/100;
     cout<<" el resultado es  "<<total<<endl;
     
     
     cout<<"\n ingreso a la camara de detectora  \n";
     cout<<" del segundo sintoma del COVID-19  \n";
     
     cout<<" \n\ningrese su temperatura \n\n";
     cin>>b;
     if(b>37)
	 {
	 	cout<<" necesitas chequeo de un medico,pues \n";
	    cout<<" tienes uno de los sintomas del COVID-19\n ";
     }
     else
	 {
	 	cout<<" \n\ncuidate tu temperatura es menor a 37\n\n ";
	 }
	 cout<<" \n\noprima p para continuar \n";
	 cin>>oprima;
    }while(oprima=='P');
    
    
    
    
    
    
    
    
}
