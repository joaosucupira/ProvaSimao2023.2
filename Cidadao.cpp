#include "Cidadao.h"
Cidadao::Cidadao()
{
	cont_id++;
	id = -1;
}

Cidadao::~Cidadao()
{
	cont_id--;
}	

void Cidadao::votar(){}
void Cidadao::desalienar(){}
const int Cidadao::getLimpo() const { return 0; }
const int Cidadao::getId() const { return id; }