#ifndef MAGOGRYFFINDOR_H
#define MAGOGRYFFINDOR_H
#include "Mago.h"
class MagoGryffindor : public Mago
{
	private:
		int atrevimiento;
	public:
		MagoGryffindor(int,int,int,int,int);
		~MagoGryffindor();
		virtual void toString();
	protected:
};

#endif