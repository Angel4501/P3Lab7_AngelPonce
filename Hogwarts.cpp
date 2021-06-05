#include "Hogwarts.h"

Hogwarts::Hogwarts()
{
}

Hogwarts::Hogwarts(vector<MagoGryffindor*> mg, vector<MagoSlytherin*> ms ,vector<MagoHufflepuff*> mh, vector<MagoRavenclaw*> mr, int year){
	magos_slytherin = ms;
	magos_hufflepuff = mh;
	magos_gryffindor = mg;
	magos_ravenclaw = mr;	
	anio = year;	 
}

Hogwarts::~Hogwarts()
{
}

void Hogwarts::promedio_habilidades_por_casa(){
	double astucia=0; double inteligencia=0; double lealtad = 0; double valentia=0;
	for(int i=0; i<magos_slytherin.size();i++){
		//if
	}
}

void Hogwarts::printMagos_slytherin(){
	//cout<<"Magos Slytherin"<<endl;
	for(int i=0; i<magos_slytherin.size(); i++){
		magos_slytherin[i]->toString();
	}
	cout<<endl;
}
void Hogwarts::printMagos_hufflepuff(){
	//cout<<"Magos Hufflepuff"<<endl;
	for(int i=0; i<magos_hufflepuff.size(); i++){
		magos_hufflepuff[i]->toString();
	}
	cout<<endl;
}
void Hogwarts::printMagos_gryffindor(){
	//cout<<"Magos Gryffindor"<<endl;
	for(int i=0; i<magos_gryffindor.size(); i++){
		magos_gryffindor[i]->toString();
	}
	cout<<endl;
}
void Hogwarts::printMagos_ravenclaw(){
	//cout<<"Magos Ravenclaw"<<endl;
	for(int i=0; i<magos_ravenclaw.size(); i++){
		magos_ravenclaw[i]->toString();
	}
	cout<<endl;
}