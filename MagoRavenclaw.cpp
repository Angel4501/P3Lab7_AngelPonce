#include "MagoRavenclaw.h"
#include<stdlib.h>
#include<time.h>

MagoRavenclaw::MagoRavenclaw(int c, int astucia, int inteligencia, int lealtad, int valentia) : Mago(astucia, inteligencia, lealtad, valentia)
{
	creatividad = c;
}

MagoRavenclaw::~MagoRavenclaw()
{
}

void MagoRavenclaw::toString(){
	
	cout<<"Ravenclaw: "<<endl
	<<"creatividad: "<<creatividad<<endl;
	toString2();
	
}