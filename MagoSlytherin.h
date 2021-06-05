#ifndef MAGOSLYTHERIN_H
#define MAGOSLYTHERIN_H
#include "Mago.h"
#include<string>
using namespace std;
class MagoSlytherin : public Mago
{
	private:
		int liderazgo;
	public:
		MagoSlytherin(int,int,int,int,int);
		~MagoSlytherin();
		virtual void toString();
	protected:
};

#endif