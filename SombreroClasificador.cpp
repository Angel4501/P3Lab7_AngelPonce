#include "SombreroClasificador.h"

SombreroClasificador::SombreroClasificador()
{
}

SombreroClasificador::~SombreroClasificador()
{
}

Hogwarts* SombreroClasificador::clasificar_magos_nuevos(vector<Mago*> mags, int anio){
	//Hogwarts* hog = new Hogwarts();
	vector<MagoGryffindor*> mg;
	vector<MagoSlytherin*> ms;
	vector<MagoHufflepuff*> mh;
	vector<MagoRavenclaw*> mr;
	
	for(int i=0; i<mags.size(); i++){
		if(typeid(MagoGryffindor) == typeid(*(mags[i]))){
			mg.push_back(static_cast<MagoGryffindor*>(mags[i]));
		}
		else if(typeid(MagoSlytherin) == typeid(*(mags[i]))){
			ms.push_back(static_cast<MagoSlytherin*>(mags[i]));
		}
		else if(typeid(MagoHufflepuff) == typeid(*(mags[i]))){
			mh.push_back(static_cast<MagoHufflepuff*>(mags[i]));
		}
		else if(typeid(MagoRavenclaw) == typeid(*(mags[i]))){
			mr.push_back(static_cast<MagoRavenclaw*>(mags[i]));
		}
	}
	return new Hogwarts(mg,ms,mh,mr,anio);
	//return hog;
}