#pragma once
#include "Eleitor.h"

class Candidato : public Eleitor
{
public:
	Candidato();
	~Candidato();
	virtual void votar();
	const int getLimpo() const;
	void operator ++();
	const bool getEleito() const;

private:
	static int votos_total; // todos os objetos vao acessar esse mesmo valor
	int votos; // votos apenas do candidato que chamar o operador
	int limpo;
};

Candidato::Candidato()
{
}

Candidato::~Candidato()
{
}

// Operador sobrecarregado para somar tanto o numero de votos do candidato quanto o total
void Candidato::operator ++() {
	votos++;
	votos_total++;
}

void Candidato::votar() {
	operator++();
}