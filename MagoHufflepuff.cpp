#include "MagoHufflepuff.h"
#include<stdlib.h>
#include<time.h>

MagoHufflepuff::MagoHufflepuff(int p, int astucia,int inteligencia,int lealtad,int valentia) : Mago (astucia,inteligencia,lealtad,valentia)
{
	paciencia = p;
	
}

MagoHufflepuff::~MagoHufflepuff()
{
}

void MagoHufflepuff::toString(){
	
	cout<<"Hufflepuff: "<<endl
	<<"Paciencia: "<<paciencia<<endl;
	toString2();
	
}