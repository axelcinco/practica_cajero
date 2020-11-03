#include <iostream>
#include<conio.h>
using namespace std;
string usuario="",nip="";
int respuesta=0, contador=0,opc=0;







int main() {

    do{
    
    	
		
	
		
		cout<<" \n ingrese el nombre del usuario: "; cin>>usuario;
		cout<<" \n ingrese el password del usuario: "; cin>>nip;
		
		if ((usuario == "axel" && nip == "12345")||(usuario == "juan" && nip == "24689")||(usuario=="francisco" && nip=="67890"))
		{
			
				
			
			
			cout<<" bienvenido al banco garcia";
			cout<<endl;
			cout<<"_______________________________";
			cout<<endl;
			cout<<"presione 1.- para deposito"<<endl;           //hacemos un menu para el usuario
			cout<<"presione 2.- para transaccion"<<endl;
			cout<<"presion 3.- para cambiar nip"<<endl;
			cout<<"presione 4.- para salir"<<endl;
			cout<<"____________________________________"<<endl;
			
			cout<<"elija una opcion: ";cin>>opc; //leemos la opcion para el menu
			switch(opc)
			{
				case 1:
					  cout<<" deposito de dinero: "<<endl;
				break;
					
				case 2:
					cout<<"transacciones bancarias"<<endl;
				break;
					
				case 3:
					cout<<"cambio de nip:"<<endl;
					break;
					case 4:
						return 0;
						break;
				default:
				  break;
						
				
			}   //termina el switch
			
			
			
	
			cout<<endl;
		
		
	
		}
	   
		
		
		
			else 
			{
				 
				 contador=contador+1;
				 	cout<<"  datos erroneos: "<<endl;
				 	cout<<" ADVERTENCIA, tienes tan solo 3 intentento y llevas "<<contador;
				 	cout<<endl;
					 
				
					
				}
				
				 
			 
					 


	
	
}while(contador<3); // termino del ciclo while condicion para que cuando el usuario de mas de 3 intentos se cierre el programa	}while(respuesta!=2);	
	
	
	return 0;
}
