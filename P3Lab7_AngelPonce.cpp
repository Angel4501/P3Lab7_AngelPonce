#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int menu();

int main(int argc, char** argv) {
	int a = 0;
	while(a!=5){
		switch(a = menu()){
			case 1:{
				break;
			}
			case 2:{
				break;
			}
			case 3:{
				break;
			}
			case 4:{
				break;
			}
			case 5:{
				cout<<"Salio con exito..."<<endl;
				break;
			}
				
		}
	}
	return 0;
}

int menu(){
	int opc = 0;
	while(opc!=5){
		cout<<"1. "<<endl
		<<"2. "<<endl
		<<"3. "<<endl
		<<"4. "<<endl
		<<"5. Salir"<<endl
		<<"Opcion: ";
		cin>>opc;
		if(opc>=1&&opc<=5){
			break;
		}
		else{
			cout<<"Opcion no valida ingresela nuevamente"<<endl;
		}
	}
	return opc;
}