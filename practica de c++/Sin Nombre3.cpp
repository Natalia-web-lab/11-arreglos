#include <iostream>

using namespace std;

int main(){
	int opcion,op_v,op_nv;
	cout<<"\n\n			*************"<<endl;
	cout<<"			BIENVENIDO AL MENU DE BELLA NAPOLI"<<endl;
	cout<<"			*************"<<endl;
	cout<<"			1.- VEGETARIANO"<<endl;//FLOOROOOOOOOO
	cout<<"			2.- NO VEGETARIANO"<<endl;
	cout<<"			Ingrese su opcion:"; cin>>opcion;
	
	system("cls");//SIRVE PARA LIMPIAR PANTALLA
	
	switch (opcion){
		case 1: 
				cout<<"\n\n			******"<<endl;
				cout<<"			MENU VEGETARIANO"<<endl;
				cout<<"			******"<<endl;
				cout<<"			1.- PIMIENTO"<<endl;
				cout<<"			2.- TOFU"<<endl;
				cout<<"			Ingrese su opcion:"; cin>>op_v;	
				
				system("cls");
				
				if(op_v==1){//opcion es 1?
					cout<<"\n\n\n		Pizza vegetariana con ingredientes: PIMIENTO,MOZZARELLA Y TOMATE."<<endl;	
				}
				else{
					cout<<"\n\n\n		Pizza vegetariana con ingredientes: TOFU,MOZZARELLA Y TOMATE."<<endl;
				}
			break;
		case 2:
				cout<<"\n\n			********"<<endl;
				cout<<"			MENU NO VEGETARIANO"<<endl;
				cout<<"			*******"<<endl;
				cout<<"			1.- PEPERONI"<<endl;
				cout<<"			2.- JAMON"<<endl;
				cout<<"			3.- SALMON"<<endl;
				cout<<"			Ingrese su opcion:"; cin>>op_nv;
				
				system("cls");
				
				switch(op_nv){
					case 1:
						cout<<"\n\n\n		Pizza no vegetariana con ingredientes: PEPERONI,MOZZARELLA Y TOMATE."<<endl;
						break;
						
					case 2:
						cout<<"\n\n\n		Pizza no vegetariana con ingredientes: JAMON,MOZZARELLA Y TOMATE."<<endl;
						break;
					
					case 3:
						cout<<"\n\n\n		Pizza no vegetariana con ingredientes: SALMON,MOZZARELLA Y TOMATE."<<endl;
						break;
					
					default: 
						cout<<"\n\n\n		OPCION INCORRECTA."<<endl;		
				}	
				
			break;//sirve para dar un pequeño tiempo de vista
		default: 
				cout<<"			OPCION INCORRECTA."<<endl;
			break;
		
	}
	return 0;
}
