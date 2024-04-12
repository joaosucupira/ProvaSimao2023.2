#pragma once
#include "Cidadao.h"
#include<list>


class Partido
{
public:
	Partido();
	~Partido();
	void filiar(Cidadao* p);
	void desfiliar(Cidadao* p);
	void politizar();

private:

	list<Cidadao> filiados;

};

Partido::Partido()
{
}

Partido::~Partido()
{
}