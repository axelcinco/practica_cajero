#include <iostream>
#include<conio.h>
using namespace std;
string usuario="",nip="";
int respuesta=0, contador=0,opc=0;
double saldo_inicial=0,saldo_inicial2=0,saldo_inicial3=0, acum_deposito=0,monto=0,acum_deposito2=0,acum_deposito3=0,acumulador_deposito=0,acumulador_deposito2=0,acumulador_deposito3=0;

double deposito(double monto){

   if(usuario=="axel" && nip=="12345")
   {
       
       saldo_inicial=saldo_inicial+monto;
       cout<<" dinero de su cuenta es : "<<saldo_inicial;
       cout<<endl;
       acumulador_deposito+=saldo_inicial;
    
   
   }
   
   else if(usuario =="juan" && nip =="24689")
   {
      
       saldo_inicial2=saldo_inicial2+monto;
       cout<<" dinero de su cuenta es : "<<saldo_inicial2;
       cout<<endl;    
        acumulador_deposito2+=saldo_inicial2;
       
   
   }
   else 
   {
   	
       saldo_inicial3=saldo_inicial3+monto;
       cout<<" dinero de su cuenta es : "<<saldo_inicial3;
       cout<<endl;    
         acumulador_deposito3+=saldo_inicial3;
       
   }
   return ((acumulador_deposito)||(acumulador_deposito2)||(acumulador_deposito3));
}

int main() {
while(contador!=3)
{
		cout<<" \n ingrese el nombre del usuario: "; cin>>usuario;
		cout<<" \n ingrese el password del usuario: "; cin>>nip;
		if ((usuario == "axel" && nip == "12345")||(usuario == "juan" && nip == "24689")||(usuario=="francisco" && nip=="67890"))
		{
			
	do{

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
					  cout<<"ingrese el monto que quiere depositar: "; 
					  cin>>monto;
                      cout<<endl; 
					  deposito(monto);  
				break;
				
					
				case 2:
					cout<<"transacciones bancarias"<<endl;
				break;
					
				case 3:
					cout<<"cambio de nip:"<<endl;
					break;
					case 4:
						break;
						break;
				default:
				  break;
						
				
			}   //termina el switch
			cout<<endl;	
		}			
				
}while(opc!=4); // termino del ciclo while condicion para que cuando el usuario de mas de 3 intentos se cierre el programa	}while(respuesta!=2);	

}
	else 
			{
				 
				 contador=contador+1;
				 	cout<<"  datos erroneos: "<<endl;
				 	cout<<" ADVERTENCIA, tienes tan solo 3 intentento y llevas "<<contador; 
				 	cout<<endl;
					
}		
		}
    

	return 0;
}
