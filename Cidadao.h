#pragma once

class Cidadao
{
public:
	Cidadao();
	virtual ~Cidadao();

	void votar();
	virtual void desalienar();
	virtual const int getLimpo() const;
	const int getId() const;


protected:
	static int cont_id;
	int id;

};

