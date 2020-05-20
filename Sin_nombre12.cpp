#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
void suma();
void divi();
void multi();
void resta();
main(){
	
	char siga='S',opcion;
	int a,b,c;
	do
	{
	
	cout<<"\n      *****************************";
	cout<<"\n      *      S para la suma       *";
	cout<<"\n      *      R para la resta      *";
	cout<<"\n      *      D para dividir       *";
	cout<<"\n      *      M para multiplicar   *";
 	cout<<"\n      ****digite la opcion deseada*";
    cin>>opcion;
	if(opcion=='S')
	{
		cout<<"suma  "; 
		suma();
		
		
	}
	if(opcion=='R')
	{
	    cout<<"resta  ";
		//resta();
	}
	if(opcion=='D')
	{
	    cout<<"multi  ";	
		//multi();
	}
	if(opcion=='M')
	{
	    cout<<"divi ";
		//divi();
	}
	cout<<"   desa continuar digite mayuscula (S)  ";
	cin>>siga;
	
	getch();
}   
   while(siga=='S');
   
}
   void suma()
   {
      int a;
      cout<<"    ingrese uno para continuar "<<endl;
      cin>>a;
      if(a==1)
	  {
      	for(a=1;a<=10;a++){
		  a=a+1;
      	  cout<<" "<<a;
      	  
		  }
      	
	  
	  
      
	  
      
   
   }












