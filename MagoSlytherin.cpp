#include "MagoSlytherin.h"
#include<stdlib.h>
#include<time.h>
MagoSlytherin::MagoSlytherin(int astucia, int l, int inteligencia, int lealtad, int valentia) : Mago(astucia,inteligencia,lealtad,valentia)
{
	//srand(time(NULL)); 
	liderazgo = l;
}

MagoSlytherin::~MagoSlytherin()
{
}

void MagoSlytherin::toString(){
	cout<<"Slytherin: "<<endl
	<<"Liderazgo: "<<liderazgo<<endl;
	toString2();
}