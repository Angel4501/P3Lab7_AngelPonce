#include <iostream>
#include "Mago.h"
#include<vector>
#include "MagoSlytherin.h"
#include "MagoHufflepuff.h"
#include "MagoGryffindor.h"
#include "MagoRavenClaw.h"
#include "Hogwarts.h"
#include "SombreroClasificador.h"
#include<time.h>
#include <iomanip>
using namespace std;
using std::setprecision;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int menu();

vector<Mago*> generarMagos();

int main(int argc, char** argv) {
	int a = 0;
	vector<Mago*> magos = generarMagos();
	Hogwarts* hogwarts = new Hogwarts();
	while(a!=4) {
		switch(a = menu()) {
			case 1: {
				SombreroClasificador* sc = new SombreroClasificador();
				hogwarts = sc->clasificar_magos_nuevos(magos,100);
				cout<<"Se clasificaron sus magos por casa!"<<endl;
				break;
			}
			case 2: {
				cout<<"Estos son sus magos: ";
				for(int i=0; i<magos.size(); i++){
					magos[i]->toString();
					cout<<endl;
				}
				cout<<"Organizador por casa..."<<endl;
				hogwarts->printMagos_gryffindor();
				hogwarts->printMagos_hufflepuff();
				hogwarts->printMagos_ravenclaw();
				hogwarts->printMagos_slytherin();
				cout<<"Un total de "<<magos.size()<<" magos"<<endl;
				break;
			}
			case 3: {
				cout<<"El promedio es..."<<endl;
				
				break;
			}
			case 4: {
				cout<<"Salio con exito..."<<endl;
				break;
			}

		}
	}
	
	return 0;
}

int menu() {
	int opc = 0;
	while(opc!=4) {
		cout<<"1. Separar por casa"<<endl
		    <<"2. Imprimir por casa "<<endl
		    <<"3. Promedio"<<endl
		    <<"4. Salir"<<endl
		    <<"Opcion: ";
		cin>>opc;
		if(opc>=1&&opc<=4) {
			break;
		} else {
			cout<<"Opcion no valida ingresela nuevamente"<<endl;
		}
	}
	return opc;
}

vector<Mago*> generarMagos() {
	vector<Mago*> temp;
	int random=0; //minimo 20
	srand(time(NULL));
	random = rand()% 6 + 20; //entre 20 y 25 magos se van a crear
	//cout<<"Cantidad de magos (random, minimo 20): "<<random<<endl;
	float otherrandom;

	constexpr int FLOAT_MIN = 0;
	constexpr int FLOAT_MAX = 1;

	std::srand(std::time(nullptr));
	setprecision(2); //solo quiero dos decimales
	for(int i=0; i<random; i++) {

		otherrandom = FLOAT_MIN + (float)(rand()) / ((float)(RAND_MAX/(FLOAT_MAX - FLOAT_MIN))); //generando entre 0 y 1

		if(otherrandom>=0&&otherrandom<=0.25) {
			int astucia = rand()% 21 + 80;
			int liderazgo = rand()% 21 + 80;
			
			int inteligencia = 0 + rand()%(100);
			int lealtad = 0 + rand()%(100);
			int valentia = 0 + rand()%(100);
			Mago* ms = new MagoSlytherin(liderazgo, astucia, inteligencia,lealtad,valentia);
			temp.push_back(ms);
			//cout<<otherrandom<<endl;
		} 
		else if(otherrandom>=0.25&&otherrandom<=0.5) {
			
			int creatividad = rand()% 21 + 80;
			int inteligencia = rand()% 21 + 80;
			
			int astucia = 0 + rand()%(100);
			int lealtad = 0 + rand()%(100);
			int valentia = 0 + rand()%(100);
			Mago* mr = new MagoRavenclaw(creatividad, astucia, inteligencia ,lealtad,valentia);
			temp.push_back(mr);
			//cout<<otherrandom<<endl;
		} 
		else if(otherrandom>=0.5&&otherrandom<=0.75) {
			int lealtad = rand()% 21 + 80;
			int paciencia = rand()% 21 + 80;
			
			int astucia = 0 + rand()%(100);
			int inteligencia = 0 + rand()%(100);
			int valentia = 0 + rand()%(100);
			
			Mago* mh = new MagoHufflepuff(paciencia,astucia,inteligencia,lealtad,valentia);
			temp.push_back(mh);
			//cout<<otherrandom<<endl;
		} 
		else if(otherrandom>=0.75&&otherrandom<=1) {
			int valentia = rand()% 21 + 80;
			int atrevimiento = rand()% 21 + 80;
			
			int inteligencia = 0 + rand()%(100);
			int astucia = 0 + rand()%(100);
			int lealtad = 0 + rand()%(100);
			
			
			Mago* mg = new MagoGryffindor(atrevimiento,astucia,inteligencia,lealtad,valentia);
			temp.push_back(mg);
			//cout<<otherrandom<<endl;
		}
		otherrandom = 0;

	}
	return temp;
}