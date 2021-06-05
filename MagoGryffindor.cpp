#include "MagoGryffindor.h"
#include<stdlib.h>
#include<time.h>
#include<sstream>
MagoGryffindor::MagoGryffindor(int atr, int astucia, int inteligencia, int lealtad, int valentia) : Mago(astucia,inteligencia,lealtad,valentia)
{
	//srand(time(NULL));
	atrevimiento = atr;
	
}

MagoGryffindor::~MagoGryffindor()
{
}


void MagoGryffindor::toString(){
	
	cout<<"Gryffindor: "<<endl
	<<"Atrevimiento: "<<atrevimiento<<endl;
	toString2();
	
}