#pragma once
#include "Cidadao.h"

template<class Cidadao>
class List
{
public:
	List();
	~List();

private:
	List<Cidadao> pNext;
	Cidado* pInfo;	
};

List::List()
{
}

List::~List()
{
}