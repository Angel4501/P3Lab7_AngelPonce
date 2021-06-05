#ifndef MAGO_H
#define MAGO_H
#include<time.h>
#include<string>
#include<iostream>
using namespace std;
class Mago
{
	private:
		
	public:
		Mago();
		Mago(int,int,int,int);
		~Mago();
		virtual void toString();
		
	protected:
		int astucia;
		int inteligencia;
		int lealtad;
		int valentia;
		void toString2();
};

#endif

