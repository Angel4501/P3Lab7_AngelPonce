#ifndef MAGOHUFFLEPUFF_H
#define MAGOHUFFLEPUFF_H
#include "Mago.h"
#include<string>
using namespace std;
class MagoHufflepuff : public Mago
{
	private:
		int paciencia;
	public:
		MagoHufflepuff(int,int,int,int,int);
		~MagoHufflepuff();
		virtual void toString();
	protected:
};

#endif