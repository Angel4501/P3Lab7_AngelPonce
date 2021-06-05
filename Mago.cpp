#include "Mago.h"
#include<stdlib.h>
#include<time.h>
Mago::Mago(int _astucia, int _inteligencia, int _lealtad, int _valentia)
{
	//srand(time(NULL));
	/*this->astucia = 0 + rand()%(100);
	this->inteligencia = 0 + rand()%(100);
	this->lealtad= 0 + rand()%(100);
	this->valentia = 0 + rand()%(100);*/
	astucia = _astucia;
	inteligencia = _inteligencia;
	lealtad = _lealtad;
	valentia = _valentia;
}

Mago::~Mago()
{
}

void Mago::toString(){
	cout<<"";
}

void Mago::toString2(){
	cout<<"Astucia: "<<this->astucia<<endl
	<<"Inteligencia: "<<this->inteligencia<<endl
	<<"Lealtad: "<<this->lealtad<<endl
	<<"Valentia: "<<this->valentia<<endl;
}