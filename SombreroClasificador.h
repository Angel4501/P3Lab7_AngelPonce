#ifndef SOMBREROCLASIFICADOR_H
#define SOMBREROCLASIFICADOR_H
#include "Hogwarts.h"
class SombreroClasificador
{
	
	public:
		Hogwarts* clasificar_magos_nuevos(vector<Mago*>, int);
		
		SombreroClasificador();
		~SombreroClasificador();
	protected:
};

#endif