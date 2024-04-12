#pragma once
#include "Candidato.h"


template<class Candidato>
class Set
{
public:
	Set();
	~Set();

private:
	Set<Candidato> pNext;
	Candidato* pInfo;

};

Set::Set()
{
}

Set::~Set()
{
}