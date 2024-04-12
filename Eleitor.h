#pragma once
#include "Cidadao.h"
#include "Candidato.h"

class Eleitor : public Cidadao
{
public:
	Eleitor();
	virtual ~Eleitor();
	virtual void votar();
	const int virtual getLimpo() const;
	void desalienar();
	void considerar(Candidato* p);

protected:
	bool alienado;
	set<Candidato *> cands;
	const int limpo;

};

Eleitor::Eleitor()
{
}

Eleitor::~Eleitor()
{
}