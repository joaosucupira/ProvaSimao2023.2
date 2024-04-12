#pragma once
#include "Partido.h"
#include "Candidato.h"
#include"Cidadao.h"
#include "Eleitor.h"
#include<vector>
#include<list>
#include<set> // aula 15

using namespace std;

class Eleicao
{
public:
	Eleicao();
	~Eleicao();

	void criarPartidos();
	void criarEleitores();
	void criarCandidatos();
	void executar();

private:
	vector<Partido*> partidos;
	vector<Candidato*> candidatos;
	vector<Eleitor*> eleitores;
	
};

