#ifndef HOGWARTS_H
#define HOGWARTS_H
#include<vector>
#include<iostream>
#include "MagoSlytherin.h"
#include "MagoHufflepuff.h"
#include "MagoGryffindor.h"
#include "MagoRavenclaw.h" 
using namespace std;
class Hogwarts
{
	private:
		int anio;
		vector<MagoSlytherin*> magos_slytherin;
		vector<MagoHufflepuff*> magos_hufflepuff;
		vector<MagoGryffindor*> magos_gryffindor;
		vector<MagoRavenclaw*> magos_ravenclaw;		 
		
	public:
		void promedio_habilidades_por_casa();
		Hogwarts(vector<MagoGryffindor*>,vector<MagoSlytherin*>,vector<MagoHufflepuff*>,vector<MagoRavenclaw*>,int);
		Hogwarts();
		void printMagos_slytherin();
		void printMagos_hufflepuff();
		void printMagos_gryffindor();
		void printMagos_ravenclaw();
		~Hogwarts();
	protected:
};

#endif