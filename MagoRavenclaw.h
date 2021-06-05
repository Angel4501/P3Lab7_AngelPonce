#ifndef MAGORAVENCLAW_H
#define MAGORAVENCLAW_H
#include "Mago.h"
#include<string>
using namespace std;
class MagoRavenclaw : public Mago
{
	private:
		int creatividad;
	public:
		MagoRavenclaw(int,int,int,int,int);
		~MagoRavenclaw();
		virtual void toString();
	protected:
};

#endif