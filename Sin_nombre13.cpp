#include<iostream>
using namespace std;

            // punto 5

main()
{
	char oprimir;
	int numeros;
	cout<<"ingrese un numero del 1 al 10 para ser leido \n "<<endl;
	do{
	cin>>numeros;
	switch (numeros)
	{
		case 1:
			cout<<" [ 1 ] uno "<<endl;
			cout<<" prueba 01"
		    break;
		case 2:
			cout<<" [ 2 ] dos "<<endl;
	        break;
	    case 3:
			cout<<" [ 3 ] tres "<<endl;
		    break;
	    case 4:
			cout<<" [ 3 ] cuatro "<<endl;
		    break;
		case 5:
			cout<<" [ 3 ] cinco "<<endl;
		    break;
		case 6:
			cout<<" [ 3 ] seis "<<endl;
		    break;
		case 7:
			cout<<" [ 3 ] siete "<<endl;
		    break;
		case 8:
			cout<<" [ 3 ] ocho "<<endl;
		    break;
		case 9:
			cout<<" [ 3 ] nueve "<<endl;
		    break;
		case 10:
			cout<<" [ 3 ] diez "<<endl;
		    break;
		case 3:
			cout<<" [ 3 ] tres "<<endl;
		    break;
		default:
		    cout<<" el numero no esta ue ninguno "<<endl;    
	}
	
	
	
	  cout<<"\ningrese q para continuar\t ";
	  cin>>oprimir;
	  cout<<"\ningrese un numero del 1 al 10 para ser leido \n "<<endl;
	}while(oprimir=='q');
}
	

    


